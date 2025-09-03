#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    vector<char> result;
    int n, count = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        while (count <= num) {
            s.push(count);
            count++;
            result.push_back('+');
        }

        if (s.top() == num) {
            s.pop();
            result.push_back('-');
        } 
        else {
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    
}