#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string c;
    cin >> c;

    if(c == "N" || c == "n") {
        cout << "Naver D2" << "\n";
    }

    else {
        cout << "Naver Whale" << "\n";
    }
    return 0;
}