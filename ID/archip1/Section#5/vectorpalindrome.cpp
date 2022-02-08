#include <iostream>
#include <vector>
using namespace std;

// my_vector.size()
// my_vector.push_back() "append"
// my_vector.pop_back() "remove last"
// my_vector.top() "get last element"
// my_vector.clear() "clear some vector"

int main(){
    // REVERSE GIVEN STRING
    // int n; 
    // cin >> n;

    // vector <char> inputStr;
    // for (int i = 0; i < n; i++) {
    //     char c;
    //     cin >> c; 
    //     inputStr.push_back(c);
    // }

    // for (int i = n-1; i >= 0; i--) {
    //     cout << inputStr[i];
    // }
    // cout << endl;

    string s;
    getline(cin, s);

    int n;
    n = s.length();
    
    vector <char> inputStr;
    vector <char> reverseStr;

    for (char i: s) {
        if (isalpha(i)){
            inputStr.push_back(i);
        }
    }
    for (char i: s) {
        if (isalpha(i)){
            reverseStr.push_back(i);
        }
    }

    // for (char i: inputStr){
    //     cout << i << endl;
    // }

    reverse(reverseStr.begin(), reverseStr.end());

    // for (char i: reverseStr){
    //     cout << i << endl;
    // }

    // check if letters are same both forewords and backwords
    bool palindrome = true;
    for (int i = 0; i < n; i++){
        if (inputStr[i] != reverseStr[i]){
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