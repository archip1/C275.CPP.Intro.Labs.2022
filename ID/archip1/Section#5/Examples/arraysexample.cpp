#include <iostream>
using namespace std;

// creating an array with the first n numbers
// int n;
// cin >> n;
// int naturalNumbers[n];
// for (int i = 0; i < n; i++) {
//     naturalNumbers[i] = i+1;
// }

// reverse the input of string
int main(){
    int n; 
    cin >> n;
    char word[n];
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }
    for (int i = n-1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;
}
