#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Prototype
string format(string);

int main()
{
    // The following strings hold the user input and the formatted date.
    string userDate, formattedDate;

    // Get a date from the user.
    cout << "Enter a date in the form of mm/dd/yyyy: " << endl;
    cin >> userDate;
    cout << endl;

    // Call the format function to format the user input.
    formattedDate = format(userDate);
    cout << "You entered " << formattedDate << "." << endl << endl;

    system("PAUSE");
    return 0;
}

// The format function accepts a date in the form mm/dd/yyyy
// as a string, and then returns the date in the form Month Day, Year.
string format(string date)
{
    string formattedDate, months[] = { "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };

    formattedDate = months[stoi(date.substr(0, 2)) - 1];
    formattedDate = formattedDate + " " + date.substr(3, 2) + ", " + date.substr(6, 10);

    return formattedDate;
}