#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    int count = 0;
    getline(cin, str);  // 공백을 포함한 문자열을 받는 getline함수

    if(str.empty()) {
        cout << "0" <<"\n";
        return 0;
    }

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            count++;
    }

    if(str[0] == ' ')
        count--;

    if(str[str.length() - 1] == ' ')
        count--;

    cout << count + 1 << "\n";

    return 0;
}