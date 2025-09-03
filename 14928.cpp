#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string n;
    cin >> n;

    int ans = 0;

    for(int i = 0; i < n.size(); i++) {
        ans = (ans * 10 + (n[i] - '0')) % 20000303;
    }

    cout << ans;
    
    return 0;
}