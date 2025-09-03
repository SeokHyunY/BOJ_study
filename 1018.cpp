#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 체스판 
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

// 입력받은 M * N 보드를 받기 위한 배열
string board[50];

int CountWB(int x, int y);
int CountBW(int x, int y);

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        getline(cin, board[i]);
    }

    int minVal = 65;    // 조건인 8*8 체스판을 모두 다시 칠해도 64

    for(int i = 0; i + 8 <= n; i++) {
        for(int j = 0; j + 8 <= m; j++) {
            int tmp = min(CountWB(i, j), CountBW(i, j));
            if(tmp < minVal) {
                minVal = tmp;
            }
        }
    }

    cout << minVal;
    return 0;
}

// W로 시작하는 체스판, 새로 칠해야 하는 칸 수 return
int CountWB(int x, int y) {
    int count = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(board[x + i][y + j] != WB[i][j]) {
                count++;
            }
        }
    } 
    return count;
}

// B로 시작하는 체스판, 새로 칠해야 하는 칸 수 return
int CountBW(int x, int y) {
    int count = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(board[x + i][y + j] != BW[i][j]) {
                count++;
            }
        }
    } 
    return count;
}