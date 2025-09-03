#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<pair<int, int>> v;

int main() {
    int n, grade = 1;
    cin >> n;
    int x, y;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }

    for(int i = 0; i < n; i++) {
        grade = 1;
        for(int j = 0; j < n; j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second) {
                grade++;
            }
        }
        cout << grade << ' ';
    }
    return 0;
}