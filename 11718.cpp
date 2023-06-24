#include <iostream>
using namespace std;

string input;

int main() {
    while (true) {
        getline(cin, input); // 엔터가 나오기 전까지 한줄 입력

        if(input == "") {  // if 입력값이 공란이라면 break;
            break;
        }
        cout << input << "\n";
    }
    return 0;
}