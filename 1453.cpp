#include <iostream>
using namespace std;

int n, guest, num[101], result = 0;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> guest;
        
        if(num[guest] == 0)     // 자리가 있는 경우
            num[guest] = 1;     // 값을 1로 갱신
        else
            result++;           // 자리가 없는 경우
    }

    cout << result << "\n";

    return 0;
}