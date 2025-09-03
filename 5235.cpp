#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int k;
        cin >> k;
        int oddSum = 0, evenSum = 0;    // even = 짝수, odd = 홀수
        
        for(int j = 0; j < k; j++) {
            int num;
            cin >> num;

            if(num % 2 == 0) {
                evenSum += num;
            }
            else {
                oddSum += num;
            }     
        }

        if(evenSum > oddSum) {
            cout << "EVEN" << "\n";
        }
        else if(evenSum < oddSum) {
            cout << "ODD" << "\n";
        }
        else {
            cout << "TIE" << "\n";
        }
    }

    return 0;
}