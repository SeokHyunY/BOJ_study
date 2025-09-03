#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    long long listnum, findnum;
    vector<int> listv;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> listnum;
        listv.push_back(listnum);
    }

    sort(listv.begin(), listv.end());
    // binary_search는 가운데에 있는 값(중간 크기의 값)을 기준으로 정렬하기 때문에
    // 반드시 오름차순 혹은 내림차순으로 정렬
    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> findnum;
        bool isFound = binary_search(listv.begin(), listv.end(), findnum);
        // vector listv의 처음부터 끝까지 findnum이 있는지 확인하고 있으면 true, 없으면 false 반환
        cout << isFound << "\n";
    }

    return 0;
}