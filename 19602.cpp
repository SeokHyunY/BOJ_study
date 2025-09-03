#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int s, m, l;
    cin >> s >> m >> l;

    if((1 * s) + (2 * m) + (3 * l) < 10) {
        cout << "sad" << "\n";
    }
    else {
        cout << "happy" << "\n";
    }

    return 0;
}