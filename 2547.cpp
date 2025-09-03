#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n, sum = 0, candy;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> candy;
            sum = (sum + candy) % n;
        }
        if(sum % n == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
