#include <iostream>
using namespace std;

int main(){
    int a, b, total, sum;

    total = 2;
    a = 0;
    b = 1;

    cout << a << endl;
    cout << b << endl;

    while (true) {
        sum = a +b;
        total += 1;
        a = b;
        b = sum;
        cout << sum << endl;
        if (total == 20) {
            break;
        }
    }
    return 0;
}