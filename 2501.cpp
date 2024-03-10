#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0, j = 0; // divisor(약수)의 인덱스 값을 나타내줄 j
    int divisor[10000];
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisor[j] = i;
            j++;
            count++;
        }
    }
    
    // 약수의 갯수를 세어주는 count가 k보다 작다면 출력할 값이 없으므로 0, 
    // 같거나 크다면 배열은 0부터 시작하는 점을 생각하여 k - 1 출력
    if(count >= k) {
        cout << divisor[k - 1];
    }
    else {
        cout << 0;
    }

    return 0;
}