#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rev(int n) {
    string s = to_string(n);        // 문자열 변환
    reverse(s.begin(), s.end());    // 뒤집고
    return atoi(s.c_str());         // 정수 변환(atoi)
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << rev(rev(x) + rev(y)) << "\n";
}