#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, answer = 0;
    cin >> n >> m;
    
    while(n--) {
        string s;
        cin >> s;
        
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'O') {
                count++;
            }
        }
        if(count * 2 > m) {
            answer++;
        }    
    }
    cout << answer << "\n";

    return 0;
}