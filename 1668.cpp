#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> v;

int main() {
    int n, height, left = 1, right = 1;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> height;
        v.push_back(height);
    }

    int temp = v[0];
    for(int i = 0; i < v.size(); i++) {
        if(temp < v[i]) {
            temp = v[i];
            left++;
        }
    }

    temp = v[v.size() - 1];
    for(int i = v.size() - 1; i >= 0; i--) {
        if(temp < v[i]) {
            temp = v[i];
            right++;
        }
    }
    
    cout << left << "\n" << right << "\n";

    return 0;
}