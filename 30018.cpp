#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(a[i] - b[i]);
    }

    cout << ans / 2 << "\n";
    return 0;
}