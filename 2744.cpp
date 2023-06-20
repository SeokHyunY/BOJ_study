#include <iostream>
using namespace std;

string str;

int main() {
    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        if('A' <= str[i] && 'Z' >= str[i]) {
            str[i] = tolower(str[i]);
        }
        else /*if('a' <= str[i] && str[i] <= 'z')*/ {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << "\n";
    
    return 0;
}