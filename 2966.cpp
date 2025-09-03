#include <iostream>
using namespace std;

int main() {
    char a[3] = {'A', 'B', 'C'};
    char b[4] = {'B', 'A', 'B', 'C'};
    char c[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
    char arr[101];
    int count[3] = {0, 0, 0};

    int n;
    int result = 0;
    cin >> n;
    cin >> arr;

    for(int i = 0; i < n; i++) {
        if(a[i % 3] == arr[i]) {
            count[0]++;
        }
        if(b[i % 4] == arr[i]) {
            count[1]++;
        }
        if(c[i % 6] == arr[i]) {
            count[2]++;
        }
    }

    for(int i = 0; i < 3; i++) {
        if(result < count[i]) {
            result = count[i];
        }
    }
    cout << result << "\n";
    if(count[0] == result) {
        cout << "Adrian" << "\n";
    }
    if(count[1] == result) {
        cout << "Bruno" << "\n";
    }
    if(count[2] == result) {
        cout << "Goran" << "\n";
    }

    return 0;
}