// This program uses a function that returns a value.
#include <iostream>
using namespace std;

// Function prototypes
int sum(int, int, int);
double avg(int, int, int);

int main()
{
    int value1 = 20,   // The first value
        value2 = 40,   // The second value
        value3 = 50,   // The third value
        total;         // To hold the total

    double average;    // To hold the average

   // Call the sum and avg functions, passing the contents of value1, value2, and value3 as arguments.
   // Assign the return value to the total and average variables.
   total = sum(value1, value2, value3);
   average = avg(value1, value2, value3);

   // Display the sum and average of the values.
   cout << "The sum of " << value1 << ", " << value2 << ", and " << value3 << " is " << total << endl;
   cout << "and its average is " << average << "." << endl;

   return 0;
}

// Definition of function sum. This function returns the sum of its three parameters.
int sum(int num1, int num2, int num3)
{
   return num1 + num2 + num3;
}
// Definition of function avg. This function returns the average of its three parameters.
double avg(int num1, int num2, int num3)
{
    return (sum(num1, num2, num3) / 3);
}