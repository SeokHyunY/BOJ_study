#include <iostream>
using namespace std;

int main() {
    int a, b, ans = 0, k = 1;

    int arr[1001];

    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= i; j++) {
            arr[k] = i;

            if(k >= 1000) {
                break;
            }
            k++;
        }
    }

    cin >> a >> b;
    
    for(int i = a; i <= b; i++) {
        ans += arr[i];
    }

    cout << ans << "\n";
}