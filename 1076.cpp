#include <iostream>
using namespace std;

string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
string input;
int value[3];
long long result;

int main() {
    for(int i = 0; i < 3; i++) {
        cin >> input;
        for(int j = 0; j < 10; j++) {
            if(color[j] == input)
                value[i] = j;
        }
    }

    result = value[0] * 10 + value[1];

    for(int i = 0; i < value[2]; i++)
        result *= 10;
    cout << result << "\n";

    return 0;
}