#include <iostream>
using namespace std;

int ox(string& s) {
    int cumulative = 0;
    int sum = 0;

    for(char &v : s) {
        if(v == 'O') {
            cumulative++;
            sum += cumulative;
        }
        else {
            cumulative = 0;
        }
    }
    return sum;
}

int main() {
    int n;
    string s;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;

        cout << ox(s) << "\n";
    }
    
    return 0;
}