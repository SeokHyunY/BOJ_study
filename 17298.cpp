#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> st;
    vector<int> v(n), ans(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = n - 1; i >= 0; i--) {   // 배열 끝에서 거꾸로 탐색
        while(!st.empty() && st.top() <= v[i]) { // 현재 값보다 작거나 같은 값이면 제거(pop)
            st.pop();
        }

        if(!st.empty()) {       // 스택이 비어있지 않으면
            ans[i] = st.top();   // top이 오큰수
        } else {
            ans[i] = -1;    // 없으면 -1
        }

        st.push(v[i]);   // 현재 값을 스택에 push, 다음 왼쪽 원소의 오큰수 후보로 활용
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}