#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // creat an array with letters as indecies
    char letters[n];
    for (int i = 0; i < n; i++) {
        cin >> letters[i];
    }

    // creat a reverse array of the original array
    char reverse[n];
    int a = 0;
    for (int i = n-1; i >= 0; i--){ 
        reverse[a] = letters[i];
        a++;
    }

    // check if letters are same both forewords and backwords
    bool palindrome = true;
    for (int i = 0; i < n; i++){
        if (letters[i] != reverse[i]){
           palindrome = false;
        }
    }

    // output either Palidrome or not
    if (palindrome == true){
        cout << "Palindrome" << endl;
    } else if (palindrome == false) {
        cout << "Not a Palindrome" << endl;
    }
}