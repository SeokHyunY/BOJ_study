#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    stack<int> st;
    int order;
    while(n--) {
        cin >> order;
        switch(order) {
            case 1:
                int num;
                cin >> num;
                st.push(num);
                break;
            case 2:
                if(!st.empty()) {
                    cout << st.top() << "\n";
                    st.pop();
                } else {
                    cout << -1 << "\n";
                }
                break;
            case 3:
                cout << st.size() << "\n";
                break;
            case 4:
                if(!st.empty()) {
                    cout << 0 << "\n";
                } else {
                    cout << 1 << "\n";
                }
                break;
            case 5:
                if(!st.empty()) {
                    cout << st.top() << "\n";
                } else {
                    cout << -1 << "\n";
                }
                break;
        }
    }    
    
    return 0;
}