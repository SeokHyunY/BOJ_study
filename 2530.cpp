#include <iostream>
using namespace std;

int main() {
    int hour, min, sec, timer;
    cin >> hour >> min >> sec;
    cin >> timer;

    sec += timer;
    min += sec / 60;
    hour += min / 60;

    cout << hour % 24 << " " << min % 60 << " " << sec % 60 << "\n";

    return 0;
}