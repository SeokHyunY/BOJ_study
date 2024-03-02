#include <iostream>
using namespace std;

int main() {
    while(true) {
        int a;
        cin >> a;

        if(a == 0) {
            break;
        }

        int result = 1;

        for(int i = 0; i < a; i++) {
            int splittingFactor, branchedCnt;
            cin >> splittingFactor >> branchedCnt;

            result *= splittingFactor;
            result -= branchedCnt;
        }
        cout << result << "\n";
    }
    return 0;
}