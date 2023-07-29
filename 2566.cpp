#include <iostream>
using namespace std;

int maxvalue = 0, row = 0, column = 0;
int arr[9][9];

int main() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> arr[i][j];

            if(arr[i][j] > maxvalue) {
                maxvalue = arr[i][j];
                row = i;
                column = j;
            }
        }
    }

    cout << maxvalue << "\n" << row + 1 << " " << column + 1 << "\n";
    return 0;
}