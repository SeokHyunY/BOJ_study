#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main () {
    int n, bigdata_count = 0, security_count = 0, pos = 0;
    cin >> n;
    
    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        if(s.substr(pos, 7) == "bigdata") {
            bigdata_count++;
            pos += 7;
        }
        else if(s.substr(pos, 8) == "security") {
            security_count++;
            pos += 8;
        }
    }

    if(bigdata_count > security_count) {
        cout << "bigdata?" << "\n";
    }
    else if(bigdata_count < security_count) {
        cout << "security!" << "\n";
    }
    else {
        cout << "bigdata? security!" << "\n";
    }

    return 0;
}