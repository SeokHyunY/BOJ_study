#include <iostream>
using namespace std;

int main() {
    // 입력받을 파일의 갯수
    int n, cluster;
    long long sum = 0;
    long long file[51];
    cin >> n;
    
    // 계산용 변수 a
    long long a;

    for(int i = 0; i < n; i++) {
        cin >> file[i];
    }
    cin >> cluster;

    for(int i = 0; i < n; i++) {
        if(file[i] > 0 && file[i] >= cluster) {
            if(file[i] % cluster == 0) {    // 나누어 떨어질 경우
                a = file[i] / cluster;
                sum += cluster * a;
            }
            else {
                a = file[i] / cluster;
                a += 1;
                sum += cluster * a;
            }
        }
        else if(file[i] > 0 && file[i] <= cluster) {
            sum += cluster;
        }
        else if(file[i] <=0) {
            continue;
        }
    }

    cout << sum;
}