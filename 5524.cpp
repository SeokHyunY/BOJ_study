#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;

        for(int j = 0; j < str.length(); j++) {
            if(isupper(str[j])) {       // isupper = 대문자 판별
                str[j] = tolower(str[j]); // 문자열에 대문자가 있으면 tolower = 소문자로 바꿔라
            }

            // 반대
            // if(isupper(str[i])) {
            //     str[i] = toupper(str[i]);
            // }
        }
        cout << str << "\n";
    }
}