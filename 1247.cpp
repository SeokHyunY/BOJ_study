#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long res = 0, overflow = 0;
    int n;

    for(int test_case = 0; test_case < 3; test_case++) {
        cin >> n;
        
        res = 0;
        overflow = 0;

        for(int i = 0; i < n; i++) {
            long long tmp;
            cin >> tmp;

            if(res > 0 && tmp > 0 && tmp > LLONG_MAX - res) {
                //res = res + tmp - LLONG_MIN;
                overflow += 1;
            }

            if(res < 0 && tmp < 0 && tmp < LONG_MIN - res) {
                //res = res + tmp - LLONG_MAX;
                overflow -= 1;
            }

            res += tmp;
        }

        if(overflow < 0) {
            cout << "- \n"; 
        }
        else if(overflow > 0) {
            cout << "+ \n"; 
        }
        else if(res == 0) {
            cout << "0 \n"; 
        }
        else if(res < 0) {
            cout << "- \n"; 
        }
        else if(res > 0) {
            cout << "+ \n"; 
        }
    }
}