#include <iostream>
using namespace std;

string input;
int testcase;

int main() {
    cin >> testcase;
    
    for(int i = 0; i < testcase; i++) {
        cin >> input;
        cout << input.substr(0, 1) << input.substr(input.length() - 1) << "\n";
    }
    return 0;
}