#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int k;
    int num;
    int stackSize;
    int sum = 0;

    cin >> k;   

    for(int i = 0; i < k; i++) {
        cin >> num;     // num을 입력받아서
        if(num == 0) {  // 0이면
            s.pop();    // top(0 이전)에 있는 숫자를 pop
        } 
        else {
            s.push(num);    // 0이 아니면 num을 push
        }
    }

    stackSize = s.size();   // 스택의 크기
    for(int i = 0; i < stackSize; i++) {
        sum += s.top();     // 스택의 top 값을 sum에 더함
        s.pop();            // pop
    }

    cout << sum << "\n";   // sum 출력
    
    return 0;
}
