#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y, x1, y1, x2, y2;
    cin >> x >> y;

    x1 = (x - 1) / 4;
    y1 = (y - 1) / 4;

    x2 = (x - 1) % 4;
    y2 = (y - 1) % 4;

    cout << abs(x1 - y1) + abs(x2 - y2);

    return 0;
}