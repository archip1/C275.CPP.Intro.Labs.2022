#include <iostream>
using namespace std;

int main() {
    // read the number of distinct items sold
    int n;
    cin >> n;

    n = n/10;

    cout << abs(n%10) << endl;

    return 0;
}