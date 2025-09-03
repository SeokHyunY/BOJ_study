#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;  // 괄호를 담을 스택

    for (char c : str) {    // 문자열의 각 문자를 하나씩 확인
        if (c == '(' || c == '[') { // 여는 괄호인 경우 push
            s.push(c);
        } else if (c == ')') {  // 닫는 괄호인 경우
            // 스택이 비어있거나, 스택의 top이 여는 괄호와 짝이 맞지 않으면 false
            if (s.empty() || s.top() != '(') { // 여는 괄호가 없거나 짝이 맞지 않으면 false
                return false;
            }
            s.pop();    // 짝이 맞으면 pop
        } else if (c == ']') {  // 닫는 괄호인 경우
            // 스택이 비어있거나, 스택의 top이 여는 괄호와 짝이 맞지 않으면 false 
            if (s.empty() || s.top() != '[') {  // 여는 괄호가 없거나 짝이 맞지 않으면 false
                return false;
            }
            s.pop();    // 짝이 맞으면 pop
        }
    }
    return s.empty();   // 스택이 비어있으면 모든 괄호가 짝이 맞는 것
}

int main() {
    string line;

    while (true) {
        getline(cin, line);  // 한 줄 입력받아서서
        if (line == ".") {   // 입력이 "."이면 종료
            break;
        }
        if (isBalanced(line)) {  // 괄호가 짝이 맞는지 확인
            cout << "yes" << "\n";  // 맞으면 "yes" 출력
        } else {
            cout << "no" << "\n";   // 아니면 "no" 출력
        }
    }

    return 0;
}
