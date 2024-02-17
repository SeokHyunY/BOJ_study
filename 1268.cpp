#include <iostream>
using namespace std;

int count[1010][1010];
int student[1010][10];

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {        //학생
        for( int j = 1; j <= 5; j++) {   //학년
            cin >> student[i][j];
        }
    }

    for(int k = 1; k <= 5; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == j)
                    continue;

                if(student[i][k] == student[j][k]) {
                    count[i][j] = 1;
                }
            }
        }
    }

    int maxcount = 0;
    int result = 1;

    for (int i = 1; i <= n; i++) {
        int c = 0;
        for(int j = 1; j <= n; j++) {
            c += count[i][j];
        }
        if(maxcount < c) {
            maxcount = c;
            result = i;
        }
    }
    cout << result;

    return 0;
}