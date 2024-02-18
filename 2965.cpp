#include <iostream>
using namespace std;

int main() {
    int a, b, c, count = 0;
    cin >> a >> b >> c;

    count = max(b - (a + 1), c - (b + 1));

    cout << count << "\n";

    return 0;
}