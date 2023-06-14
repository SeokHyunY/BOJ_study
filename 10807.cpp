#include <iostream>
using namespace std;

int main() {
    int n, v, res=0;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> v;
    for(int i = 0; i < n; i++) {
        if(arr[i] == v) {
            res++;
        }
    }
    cout << res << "\n";
     
    return 0;
}