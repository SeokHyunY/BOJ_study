#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int i = 1;

    while(i < x) {
        x -= i;
        i++;
    }

    if(i % 2 == 1)
        cout << i + 1 - x << "/" << x << "\n";
    else
        cout << x << "/" << i + 1 - x << "\n";
}