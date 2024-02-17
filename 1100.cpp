#include <iostream>
using namespace std;

int main() {
    char chess[8][8];
    int cnt = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> chess[i][j];
            
            if(chess[i][j] == 'F') {            // 값이 'F'이면서
                if(i % 2 == 0 && j % 2 == 0)    // i, j 모두 짝수거나
                    cnt++;
                else if(i % 2 == 1 && j % 2 == 1)   // i, j 모두 홀수면
                    cnt++;                          // cnt++
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}