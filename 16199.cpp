#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int y1, m1, d1, y2, m2, d2, age1, age2, age3;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    
    if (m1 < m2) {
        age1 = y2 - y1;
    }
    else if (m1 == m2 && d1 <= d2) {
        age1 = y2 - y1;
    }
    else {
        age1 = y2 - y1 - 1;
    }
    
    age2 = y2 - y1 + 1;

    age3 = y2 - y1;

    cout << age1 << "\n" << age2 << "\n" << age3 << "\n";
    return 0;
}
