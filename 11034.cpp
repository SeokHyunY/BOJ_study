#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    while(cin >> a >> b >> c) {
        int left_gap = b - a;
        int right_gap = c - b;
    
        cout << max(left_gap, right_gap) - 1 << "\n";
    }
    return 0;
}