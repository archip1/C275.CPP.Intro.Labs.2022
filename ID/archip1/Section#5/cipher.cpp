#include <iostream>
#include <string>
using namespace std;

int main(){
    string inputString;
    cin >> inputString;

    char letter = '\0';
    for (int i = 0; i < inputString.length() ; i++) {
        letter = (char(inputString[i]));
        if(letter >= 'a' && letter <= 'z'){
            letter = letter + 3;
            if (letter > 'z') {
                letter = letter - 'z' + 'a' -1;
            }
            cout << letter;
        }   
    }
    cout << endl;
}
