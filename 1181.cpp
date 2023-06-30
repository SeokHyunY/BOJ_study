#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;

bool compare(string a, string b) {
    if(a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main() {
    int string_count;
    vector<string> vec;
    cin >> string_count;

    for(int i = 0; i < string_count; i++) {
        cin >> str;
        if(find(vec.begin(), vec.end(), str) == vec.end()) // 중복이 없으면 vec.end() 반환
            vec.push_back(str);
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }

    return 0;
}