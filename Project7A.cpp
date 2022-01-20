// This program displays the month and the number of days it has.
// It also displays the days of the week and whether it is a weekday or weekend day.

#include <iostream>
using namespace std;

int main()
{
    //constant variables
    const int MONTHS = 12;
    const int DAYS = 7;

    //arrays
    int monthDays[MONTHS] = { 31, 28, 31, 30,
                              31, 30, 31, 31,
                              30, 31, 30, 31 };
    string monthName[MONTHS] = { "January", "February", "March", "April",
                                 "May", "June", "July", "August",
                                 "September", "October", "November", "December" };
    string dayName[DAYS] = { "Monday", "Tuesday", "Wednesday", "Thursday",
                             "Friday", "Saturday", "Sunday" };

    //loop for days in each month
    for (int count = 0; count < MONTHS; count++)
    {
        cout << monthName[count] << " has ";
        cout << monthDays[count] << " days." << endl;
    }

    cout << endl;

    //loop for days of week and whether it is a weekday or weekend day
    for (int count = 0; count < DAYS; count++)
    {
        if (count == 5 || count == 6)
            cout << dayName[count] << " is a weekend day." << endl;

        else
            cout << dayName[count] << " is a weekday." << endl;
    }

    return 0;
}