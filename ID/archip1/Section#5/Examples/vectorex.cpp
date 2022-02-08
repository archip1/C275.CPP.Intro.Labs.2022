#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int n;
    cin >> n;

    vector<int> my_vector;
    for (int i = 1; i <= n; i++) {
        my_vector.push_back(i);
    }
    for (int i: my_vector){
        cout << i << endl;
    }
}
