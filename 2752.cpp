#include <iostream>
using namespace std;

int main() {
    int num[3], z;
    
    for(int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < 3-1; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(num[i] > num[j]) {
                z = num[i];
                num[i] = num[j];
                num[j] = z;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        cout << num[i] << " ";
    }
    
    return 0;
}