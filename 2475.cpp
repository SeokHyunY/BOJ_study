#include <iostream>
using namespace std;

int unique_number, sum = 0;

int main() {
    for(int i = 0; i < 5; i ++) {
        cin >> unique_number;
        sum += unique_number * unique_number;
    }
    
    sum = sum % 10;

    cout << sum << "\n";

    return 0;
}