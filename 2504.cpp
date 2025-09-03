#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st; // 숫자와 괄호 모두 char로 처리
    stack<int> val; // 숫자만 따로 저장

    for(int i = 0; i < s.size(); i++) {
        char c = s[i];

        if(c == '(' || c == '[') {
            st.push(c);
            val.push(-1); // -1은 아직 계산되지 않음을 의미
        } else {
            int temp = 0;
            while(!st.empty() && val.top() != -1) {
                temp += val.top();
                val.pop();
                st.pop();   // 숫자와 대응되는 괄호 제거
            }

            if(st.empty()) {
                cout << 0 << "\n";
                return 0; // 잘못된 괄호 구조
            }

            char open = st.top();   // 여는 괄호 꺼내서 open 변수에 저장
            st.pop();
            val.pop(); // 그에 대응되는 -1 제거

            if((c == ')' && open != '(') || (c == ']' && open != '[')) {
                cout << 0 << "\n";
                return 0; // 괄호 쌍이 안 맞는 경우 예외 처리 
            }

            int value = (c == ')') ? 2 : 3; // ')'는 2, ']'는 3
            val.push((temp == 0) ? value : value * temp); 
            st.push('X'); // 더미 문자를 넣어 val와 st 짝 맞추기
        }
    }
    
    int result = 0;
    
    while(!val.empty()) {
        if(val.top() == -1) {
            cout << 0 << "\n";
            return 0; 
        }
        result += val.top();
        val.pop();
    }

    cout << result << "\n";
    return 0;
}
