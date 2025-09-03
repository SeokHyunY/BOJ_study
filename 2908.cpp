#include <iostream>
#include <string>
using namespace std;

string a, b, res;

int main() {
    cin >> a >> b;

    for(int i = 2; i >= 0; i--) {
        if(a[i] == b[i]) 
            continue;
        
        if(a[i] > b[i]) 
            res = a;
        
        else
            res = b;

        break;
    }

    cout << res[2] << res[1] << res[0] << "\n";
}