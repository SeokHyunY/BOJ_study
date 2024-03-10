#include <iostream>

using namespace std;

int main() {
    int box, book;
    int boxsize = 0, booksize = 0;
    cin >> box >> book;

    int x;  //  임시 변수 x
    
    while(box--) {
        cin >> x;
        boxsize += x;
    }

    while(book--) {
        cin >> x;
        booksize += x;
    }
    
    cout << boxsize - booksize << "\n";
}