#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;

    for(int sum = 2; sum <= n; i++) {   // 두번째 줄부터는 6의 배수씩 증가
        sum += 6 * i;
    }

    if(n == 1) {
        i = 1;
    }

    cout << i << "\n";
    
    return 0;
}