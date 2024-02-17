#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    int N = input;
    int cnt = 0;

    while(true) {
        // N에 대해 반복하므로 연산된 값도 N으로 덮어씌운다
        N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10; 

        cnt++; // 사이클 수 증가

        if(N == input) { // 초기값과 같이진다면 break;
            break;
        }
    }

    cout << cnt << "\n";

    return 0;
}