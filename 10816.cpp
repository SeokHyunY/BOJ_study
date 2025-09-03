#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> v, answer;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, num;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cin >> m;

    for(int i =0; i < m; i++) {
        cin >> num;
        auto upper = upper_bound(v.begin(), v.end(), num);
        auto lower = lower_bound(v.begin(), v.end(), num);

        cout << upper - lower << " ";
    }

    return 0;
}