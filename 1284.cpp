#include <iostream>
using namespace std;

string n; 

int main() {
    while(true) {
        cin >> n;
        if(n == "0")
            break;
            
        int result = 0;
        for(int i = 0; i < n.length(); i++) {
            if(n[i] == '1')
                result += 2;
            else if(n[i] == '0')
                result += 4;
            else
                result += 3;
            result++;
        }
        cout << result + 1 << "\n";
    }
    
    return 0;
}