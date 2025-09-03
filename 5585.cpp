#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int money, count = 0;
    cin >> money;

    int result = 1000 - money;

    count += result / 500;
    result %= 500;

    count += result / 100;
    result %= 100;

    count += result / 50;
    result %= 50;

    count += result / 10;
    result %= 10;

    count += result / 5;
    result %= 5;

    count += result / 1;
    result %= 1;

    cout << count << "\n";
    
    return 0;
}