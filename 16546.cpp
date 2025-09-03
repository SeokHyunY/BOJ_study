#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[40000] = {0, };

    for(int i = 0; i < n-1; i++) {
        int m;
        cin >> m;
        arr[m]++;
    }

    for(int i = 1; i <= n; i++) {
        if(arr[i] == 0) {
            cout << i;
        }
    }
    
    return 0;
}