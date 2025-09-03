#include <iostream>
#include <string>
using namespace std;

int alpha[26];  // 알파벳의 등장을 세어줄 alpha 배열
string str[50]; // 한줄씩 차례대로 저장

int main() {
    int max = -1;   

    for(int i = 0; i < 50; i++) {
        getline(cin, str[i]);   // 공백이 포함되어 있으므로 getline함수 사용
        
        // 한줄씩 차례대로 저장한 str을 for로 전체탐색 이후 str[i][j] - 97
        // 하게되면 알파벳 소문자들이 숫자로(a,b,c,d -> 0,1,2,3)바뀌게 되고
        // 이것들을 배열의 인덱스로 사용
        for(int j = 0; j < str[i].size(); j++) {
            alpha[str[i][j] - 97]++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(max <= alpha[i]) {
            max = alpha[i];
        }
    }

    for(int i = 0; i < 26; i++) {
        if(alpha[i] == max) {
            cout << (char)(i + 97);
        }
    }
}