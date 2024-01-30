#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the year: ";
    cin >> a;

    cout << "Enter the month: ";
    cin >> b;

    bool leap = ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));

    int month;

    if (b == 2) {
        month = (leap) ? 29 : 28;
    } else if (b == 4 || b == 6 || b == 9 || b == 11) {
        month = 30;
    } else {
        month = 31;
    }

    cout << month << "days" << endl;

    return 0;
}
