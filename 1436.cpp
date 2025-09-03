#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;  // n번째 영화화
    int result = 665;   // 제일 작은 종말의 수 666보다 작도록 초기화
    string temp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        while(1) {
            result++;
            temp = to_string(result);   // 정수형 result를 문자열로 변환
            if(temp.find("666") != -1) {    // 666을 포함하는지 확인
                break;  // -1이 아니라면(포함한다면) break;
            }           // for문으로 n번 반복. 즉, n번쨰 666을 찾으면 탈출출
        }
    }
    cout << result << "\n";
}