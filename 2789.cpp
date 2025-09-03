#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string s;
string college = "CAMBRIDGE";

int main() {
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < college.size(); j++) {
            if(s[i] == college[j]) {
                s[i] = 0;
            }
        }
    }

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != 0) {
            cout << s[i];
        }
    }

    return 0;
}