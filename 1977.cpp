#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, m, min = 0, sum = 0;
    cin >> n >> m;

    for(int i = 1; i * i <= m; i++) {
        if(i * i >= n) {
            sum += i * i;
            if(min == 0) {
                min = i * i;    // 최초(최소)값을 min에 저장
            }
        }
    }

    if(sum == 0) {  // 완전제곱수가 없는 경우 -1출력
        cout << "-1\n";
    }
    else {
        cout << sum << "\n" << min << "\n";
    }
     
    return 0;
}