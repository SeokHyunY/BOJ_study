#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> line;    // 입력값 줄
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        line.push(num);
    }

    stack<int> side;    // 옆에 빠져있기 위한 공간
    int current = 1;    // 간식받을 번호(1부터)

    while(!line.empty()) {
        int student = line.front(); // 입력값 줄 맨 첫번째를 student에 저장
        line.pop();                 // 하고 pop

        if(student == current) {    // 만약 student가 현재 순번이라면 curr++
            current++;
        } else {
            while(!side.empty() && side.top() == current) {
                side.pop();
                current++;
            }
            side.push(student); // 보조 공간(side)에 잠시 대기
        }
    }

    while(!side.empty() && side.top() == current) { // side가 비어있지 않고, side의 top이 현재 순번이라면
        side.pop(); // pop(간식 주고)
        current++;  // 다음 순번 탐색
    }

    if(side.empty()) {  // 모든 과정이 수행되고 스택이 비었으면 Nice
        cout << "Nice" << "\n";
    } else {            // 아니면 Sad
        cout << "Sad" << "\n";
    }

    return 0;
}