#include <iostream>
#include <string>
using namespace std;

char map[10][20];

int main() {
    int k;
    string s;
    cin >> k >> s;

    for(int i = 0; i < s.size() / k; i++) {
        if(i % 2 == 0) {   // 짝수행
            for(int j = 0; j < k; j++) {
                map[i][j] = s[i * k + j];
            }
        }
        else {
            int c = k - 1;
            for(int j = 0; j < k; j++) {
                map[i][j] = s[i * k + c];
                c--;
            }
        }
    }

    for(int i = 0; i < k; i++) {
        for(int j = 0; j < s.size() / k; j++) {
            cout << map[j][i];
        } 
    }
    cout << "\n";

}