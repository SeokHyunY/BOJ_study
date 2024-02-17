#include <iostream>
using namespace std;

int N, m, M, T, R;
int pulse, time; 
// N = 운동시간, m = 초기맥박, M = 최대맥박, T = 맥박증가량, R = 맥박감소량

int main() {
    cin >> N >> m >> M >> T >> R;

    if(M - m < T) { // 초기상태에서 운동이 불가할 경우
        cout << -1 << "\n";
        return 0;
    }

    pulse = m;
    while(true) {
        if(pulse + T <= M) {
            pulse += T;
            N--;
        }
        else {
            pulse -= R;
            if(pulse < m) {
                pulse = m;
            }
        }
        time++; // 운동 또는 휴식에 소요된 시간

        if(N == 0) {
            cout << time;
            return 0;
        }
    }
}
