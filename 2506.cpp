#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n, totalScore = 0, bonus = 0, testResult[100];
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> testResult[i];
        if(testResult[i] == 1) {
            totalScore += 1;
            if(testResult[i - 1] == 1) {
            bonus += 1;
            totalScore += bonus;
            } 
            else {
                bonus = 0;
            }
        }
    }

    cout << totalScore;
    return 0;
}
