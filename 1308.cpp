#include <iostream>
using namespace std;

struct date {
    int year;
    int month;
    int day;
};

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leapyear(date d1, date d2) { // 윤년 개수 구하기
    int count = 0;
    if(d1.month > 2)
        d1.year++;
    if(d2.month > 2)
        d2.year++;
    for(int i = d1.year; i < d2.year; i++) {
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            count++;
        }
    }
    return count; // 윤년의 개수만큼 ans 더해주기
}

int year_to_day(date d) { // 년월일을 일수로 바꾸기
    int date = 0;
    date += d.year * 365;
    for(int i = 0; i < d.month - 1; i++) {
        date += months[i];
    }
    date += d.day;

    return date;
}

int main() {
    date d, dday;
    int day1, day2, ans = 0;
    cin >> d.year >> d.month >> d.day;
    cin >> dday.year >> dday.month >> dday.day;

    day1 = year_to_day(d);
    day2 = year_to_day(dday);

    ans = day2 - day1;
    ans += leapyear(d, dday);

    if(ans >= 365243)
        cout << "gg" << "\n";
    else 
        cout << "D-" << ans << "\n";

    return 0;
}