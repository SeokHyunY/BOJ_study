#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >> n;

    while(n--) {
        cin >> num;
        sum += num - 1;
    }
    ++sum;

    cout << sum << "\n";
}