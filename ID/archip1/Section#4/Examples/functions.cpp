#include <iostream>
using namespace std;

int main() {

    int sumDigits(int x) {
        int out = 0; 
        while (x != 0) {
            out += x%10; 
            x /= 10;
        }
        return out;
    }

return 0;
}


// recursive approach
// int sumDigits(int x) { 
//     if (x == 0) {
//         return 0; 
//     } else {
//     return x%10 + sumDigits(x/10);
//     }
// }

// void printHelloWorld () {
//     cout << "Hello World!" << endl;
// }