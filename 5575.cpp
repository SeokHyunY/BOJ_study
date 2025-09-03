#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int startH, startM, startS, endH, endM, endS;
    int start, end, t, h, m, s;
    
    for(int i = 0; i < 3; i++) {
        cin >> startH >> startM >> startS >> endH >> endM >> endS;
        start = (startH * 3600) + (startM * 60) + startS;
        end = (endH * 3600) + (endM * 60) + endS;
        t = end - start;
        h = t / 3600;
        m = (t % 3600) / 60;
        s = (t % 3600) % 60;

        cout << h << " " << m << " " << s << "\n";
    }

    return 0;
}