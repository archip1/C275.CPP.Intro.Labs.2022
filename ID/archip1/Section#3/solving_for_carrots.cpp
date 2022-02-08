#include <iostream>
using namespace std;

int main() {
    // read the number of distinct items sold
    int n;
    cin >> n;
    
    // read the target price
    int carrots;
    cin >> carrots;
    
    // read the price of the items and put them in an array
    int contestants[n];
    for (int i = 0; i < n; i++) {
        cin >> contestants[i];
    }

    cout << carrots << endl;
}