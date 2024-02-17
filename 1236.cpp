#include <iostream>
using namespace std;

char castle[55][55];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> castle[i][j];
        }
    }
    int rowCheck = 0;
    for(int i = 0; i < n; i++) {
        bool check = true;
        for(int j = 0; j < m; j++) {
            if(castle[i][j] == 'X') {
                check = false;
                break;
            }
        }
        if(check) 
            rowCheck++;
    }

    int colCheck = 0;
    for(int i = 0; i < m; i++) {
        bool check = true;
        for(int j = 0; j < n; j++) {
            if(castle[j][i] == 'X') {
                check = false;
                break;
            }
        }
        if(check)
            colCheck++;
    }
    cout << max(rowCheck, colCheck) << "\n";

    return 0;
}