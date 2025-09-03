#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    count = k / pow(2, n - 1);

    cout << count << "\n";
    return 0;
}
