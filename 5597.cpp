#include <iostream>
using namespace std;

int main() {
    int arr[31] = { 0, };
    int a;

    for(int i = 0; i < 28; i++) {
        cin >> a;
        arr[a] = 1; // true
    }

    for(int i = 1; i < 31; i++) {
        if(!arr[i])
        cout << i << "\n";
    }
    return 0;
}