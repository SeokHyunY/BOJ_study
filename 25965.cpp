#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n;

    while(n--) {
        cin >> m;
        long long ans = 0;
        vector<long long> K(m), D(m), A(m);
        
        for(int i = 0; i < m; i++) {
            cin >> K[i] >> D[i] >> A[i];
        }
        int k, d, a;
        cin >> k >> d >> a;

        for(int i = 0; i < m; i++) {
            long long donation = (K[i] * k) - (D[i] * d ) + (A[i] * a);
            if(donation > 0) {
                ans += donation;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
