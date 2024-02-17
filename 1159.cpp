#include <iostream>
#include <string>
using namespace std;

int main() {
    // 알파벳 배열 선언 및 초기화
    int count[26] = {0, };
    
    int n;
    cin >> n;

    // 선수 이름 입력 후 첫 글자 추출
    for(int i = 0; i < n; i++) {
        string player = "";
        cin >> player;
        count[player[0] - 'a']++;
    }

    // 같은 성 5개 이상 존재 여부 판단을 위한 flag 변수
    int isExist = 0;

    // 성씨 배열 순회
    for(int i = 0; i < 26; i++) {
        if(count[i] >= 5) {
            cout << (char)('a' + i);
            isExist = 1;
        }
    }

    if(isExist == 0) {  // if isExist : false
        cout << "PREDAJA" << "\n";
    }
    return 0;
}