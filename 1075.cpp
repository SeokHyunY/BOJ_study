#include <iostream>
using namespace std;

int main() {
    long long n;
    int f;

    cin >> n;
    cin >> f;

    n = n / 100;
    n = n * 100;

    while(n % f != 0) 
        n++;
    n = n % 100;

    if(n < 10)
        cout << "0" << n << "\n";
    else
        cout << n << "\n";

    return 0;
}