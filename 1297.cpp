#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int d, w, h;    // d = 대각선, w = 너비 비율, h = 높이 비율
    cin >> d >> h >> w;

    // l = 비율로 따진 대각선의 길이, x = 실제 너비, y = 실제 높이
    double l = sqrt(w * w + h * h);
    double x = w * d / l;
    double y = h * d / l;

    cout << (int)y << " " << (int)x << "\n";
}