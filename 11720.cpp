#include <iostream>
using namespace std;

int main() {
    int n, result = 0;
    char num;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        result += (num - '0');
    }
    cout << result << "\n";
}