#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string res = s;

    for(int i = 1; i < n; i++) {
        string temp;
        cin >> temp;

        for(int j = 0; j < s.length(); j++)
            if(s[j] != temp[j])
                res[j] = '?';
    }
    cout << res << "\n";

    return 0;
}