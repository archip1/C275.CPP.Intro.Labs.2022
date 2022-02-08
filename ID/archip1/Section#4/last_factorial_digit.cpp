#include <iostream>
using namespace std;

int main() {
    int lines;
    cin >> lines;

    int n;
    for (int i = 0; i<lines; i++) {
        cin >> n;
        if (n == 0) {
            cout << 1 << endl;
        } else if (n <= 2) {
            cout << n << endl;
        } else if (n == 3) {
            cout << 6 << endl;
        } else if (n == 4) {
            cout << 4 << endl;
        } else {
            cout << 0 << endl;
        }
        n = 0;
    }

return 0;
}