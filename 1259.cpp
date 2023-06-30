#include <iostream>
using namespace std;

string input;

int main() {
    while(true) {
        cin >> input;
        
        if(input == "0")
            break;
        int checknum = 0;   // 조건에 부합하는지 확인하기 위한 변수
        for(int i = 0; i < input.length() / 2; i++) {
            if(input[i] != input[input.length() - i - 1]) {
                checknum++;
                break;
            }
        }
        if(checknum == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}