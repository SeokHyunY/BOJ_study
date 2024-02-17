#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int min = -1;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(min == -1 || min > arr[i])
            min = arr[i];
    }

    int cnt;
    int res = min - 1;
    while(cnt < 3) {
        res++;
        cnt = 0;
        for(int i = 0; i < 5; i++) {
            if(res % arr[i] == 0)
            cnt++;
        }
    }
    cout << res << "\n";

    return 0;
}