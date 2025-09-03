#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, v, count = 1;
    cin >> a >> b >> v;
    
    count += (v - a) / (a - b);

    if((v - a) % (a - b) != 0) {
        count++;
    }

    cout << count << "\n";
    
    return 0;
}