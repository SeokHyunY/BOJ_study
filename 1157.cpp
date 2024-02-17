#include <iostream>
#include <String>
using namespace std;

int alphabet[26], count = 0;
string input;
// 아스키코드 : 대문자 65~90, 소문자 97~122

int main() {
    cin >> input;

    // 빈도수 체크
    for(int i = 0; i < input.length(); i++) {
        if(input[i] < 97) 
            alphabet[input[i] - 65]++; // 대문자
        else
            alphabet[input[i] - 97]++; // 소문자
    }

    int max = 0;
    int max_index = 0;

    for(int i = 0; i < 26; i++) {
        if(max < alphabet[i]) {
            max = alphabet[i];
            max_index = i;
        }
    }

    // 가장 많이 사용된 알파벳이 여러개인지 확인
    for(int i = 0; i < 26; i++) {
        if(max == alphabet[i])
        count++;
    }

    // 여러개라면 ?출력, 아니라면 대문자로 출력
    if(count > 1)
        cout << "?" << "\n";
    else    
        cout << (char)(max_index + 65) << "\n";
    
    return 0;
}