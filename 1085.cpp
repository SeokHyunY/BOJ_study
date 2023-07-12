#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, w, h, result;
    cin >> x >> y >> w >> h;
    
    int res1 = w - x, res2 = h - y;

    result = min({x, y, res1, res2});
    
    cout << result << "\n";

    return 0;
}