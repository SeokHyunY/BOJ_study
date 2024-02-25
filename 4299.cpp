#include <iostream>
using namespace std;

int main() {
    int sum, sub, teamA, teamB;
    cin >> sum >> sub;

    if(sum < sub)
        cout << "-1" << "\n";
    else {
        teamA = (sum + sub) /2;
        teamB = (sum - sub) /2;

        if(teamA + teamB == sum && teamA - teamB == sub)
            cout << teamA << " " << teamB << "\n";
        else 
            cout << "-1" << "\n";
    }
    return 0;
}