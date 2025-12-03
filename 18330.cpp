#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n, k, nextmonth = 0;
    cin >> n >> k;

    nextmonth = k + 60;

    if(n < nextmonth) {
        cout << n * 1500;
    } else {
        cout << (nextmonth * 1500) + ((n - nextmonth) * 3000);
    }

    return 0;
}
