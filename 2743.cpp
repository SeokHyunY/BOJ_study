#include <iostream>
using namespace std;

string a;
int sum;

int main() {
    cin >> a;

    for(int i = 0; i < a.length(); i++) {
        sum++;
    }
    cout << sum << "\n";
    
    return 0;
}