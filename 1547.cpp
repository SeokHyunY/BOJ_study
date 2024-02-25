#include <iostream>
using namespace std;

int main() {
    int x, y, m;
    int arr[3] = {1, 2, 3};
    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        swap(arr[x - 1], arr[y - 1]);
    }

    for(int i = 0; i < 3; i++) {
        if(arr[i] == 1)
            cout << i + 1;
    }
}