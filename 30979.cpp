#include <iostream>
using namespace std;

int main() {
    int t, n, f;
    int total = 0;

    cin >> t >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> f;
        total += f;
    }
    
    if(total >= t) {
        cout << "Padaeng_i Happy" << "\n";
    } else {
        cout << "Padaeng_i Cry" << "\n";
    }
    return 0;
}