#include <iostream>
using namespace std;

int main() {
    int t, h, w, n, result;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        if(n % h == 0) {
            result = h * 100 + (n / h); 
        }
        else {
            result = (n % h) * 100 + (n / h) + 1;
        }
        cout << result << "\n";
    }
    
    return 0;
}