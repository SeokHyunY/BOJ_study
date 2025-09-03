#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack <int> s;
    int n;
    string command;
    int num;
    int result = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> command;

        // 1. push
        if(command == "push") {
            cin >> num;
            s.push(num);
        }
        // 2. pop(스택이 비어있으면 -1 출력, 그 외에는 top 값 출력 후 pop)
        else if(command == "pop") {
            if(s.size() == 0) {
                result = -1;
                cout << result << "\n";
            }
            else {
                result = s.top();
                cout << result << "\n";
                s.pop();
            }
        }
        // 3. size(스택의 크기 출력)
        else if(command == "size") {
            result = s.size();
            cout << result << "\n";
        }
        // 4. empty(스택이 비어있으면 1, 아니면 0 출력)
        else if(command == "empty") {
            if(s.size() == 0) {
                result = 1;
                cout << result << "\n";
            }
            else {
                result = 0;
                cout << result << "\n";
            }
        }
        // 5. top(스택의 top 값 출력, 비어있으면 -1 출력)
        else if(command == "top") {
            if(s.size() == 0) {
                result = -1;
                cout << result << "\n";
            }
            else {
                result = s.top();
                cout << result << "\n";
            }
        }
    }

    return 0;
}