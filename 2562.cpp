#include <iostream>
using namespace std;

int main() {
    //int num[10];  배열을 쓰지 않고 입력 받을때마다 비교하는 방법으로도 해결 가능
    int num;    
    int max_value = 0;
    int max_index;

    for(int i = 0; i < 9; i++) {
        cin >> num;

        if(num > max_value) {
            max_value = num;
            max_index = i;
        }
    }

    cout << max_value << "\n" << max_index + 1 << "\n";
    
    return 0;
}