#include <iostream>
using namespace std;

long long a, b, res;

int main() {
    cin >> a >> b;

    res = (a + b) * (a - b);
    cout << res << "\n";

    return 0;
}