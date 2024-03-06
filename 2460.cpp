#include <iostream>

using namespace std;

int main() {
    int stdown, stup, total = 0, max = 0;

    for(int i = 0; i < 10; i++) {
        cin >> stdown >> stup;
        total = total - stdown + stup;

        if(total > max) {
            max = total;
        }
        else if(total >= 10001) {
            break;
        }
    }
    cout << max << "\n";
    
    return 0;
}