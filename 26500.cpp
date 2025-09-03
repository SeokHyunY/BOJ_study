#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;

        double absDist = abs(a - b);

        cout.setf(ios::fixed);
        cout.precision(1);  // 소수점 1번째 자리까지
        cout << absDist << "\n";
    }

    return 0;
}