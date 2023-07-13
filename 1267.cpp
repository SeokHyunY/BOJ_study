#include <iostream>
using namespace std;

int main() {
    int call, time, y = 0, m = 0;

    cin >> call;

    for(int i = 0; i < call; i++) {
        cin >> time;

        y += (time / 30) * 10 + 10;
        m += (time / 60) * 15 + 15;
    }

    if(y > m) {
        cout << "M " << m << "\n";
    }
    else if(y < m) {
        cout << "Y " << y << "\n";
    }
    else {
        cout << "Y M " << y << "\n";
    }

    return 0;
}