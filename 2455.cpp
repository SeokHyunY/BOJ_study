#include <iostream>
using namespace std;

int main() {
    int stdown, stup, total = 0, max = 0;

    for(int i = 0; i < 4; i++) {
        cin >> stdown >> stup;
        total += stup - stdown;

        if(total > max) {
            max = total;
        }
    } 
    cout << max << "\n";

    return 0;
}