#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int k, n;
    long long start = 1, end, mid, sum = 0, total, max = -1;
    cin >> k >> n;

    int length[k];

    for(int i = 0; i < k; i++) {
        cin >> length[i];
        sum += length[i];
    }

    end = sum / n;

    while(start <= end) {
        total = 0;
        mid = (start + end) / 2;

        for(int i = 0; i < k; i++) {
            total += length[i] / mid;
        }

        if(total >= n) {
            start = mid + 1;
            if(mid > max) {
                max = mid;
            }
        }
        else {
            end = mid - 1;
        }
    }

    cout << max;

    return 0;
}