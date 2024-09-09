#include <iostream>
using namespace std;
int main()
{
    int month;
    // cout every months
    cout << "1.january" << endl;
    cout << "2.february" << endl;
    cout << "3.march" << endl;
    cout << "4.april;" << endl;
    cout << "5.may" << endl;
    cout << "6.june" << endl;
    cout << "7.july" << endl;
    cout << "8.August" << endl;
    cout << "9.september" << endl;
    cout << "10.october" << endl;
    cout << "11.november" << endl;
    cout << "12.december" << endl;

    // value  enter for month number
    cout << "enter month 1 to 12:-";
    cin >> month;
    // swiching  between 1 to 12 months
    if (month > 12)
    {
        cout << "enter month between 1 to 12" << endl;
        cout << "enter month:-";
        cin >> month;
    }

    if (month == 1)
    {
        cout << "january" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 2)
    {
        cout << "february" << endl;
        cout << "28 days in this month" << endl;
    }
    else if (month == 3)
    {
        cout << "march" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 4)
    {
        cout << "april" << endl;
        cout << "30 days in this month" << endl;
    }
    else if (month == 5)
    {
        cout << "may" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 6)
    {
        cout << "june" << endl;
        cout << "30 days in this month" << endl;
    }
    else if (month == 7)
    {
        cout << "july" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 8)
    {
        cout << "august" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 9)
    {
        cout << "september" << endl;
        cout << "30 days in this month" << endl;
    }
    else if (month == 10)
    {
        cout << "october" << endl;
        cout << "31 days in this month" << endl;
    }
    else if (month == 11)
    {
        cout << "november" << endl;
        cout << "30 days in this month" << endl;
    }
    else if (month == 12)
    {
        cout << "december" << endl;
        cout << "31 days in this month" << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
    return 0;
}