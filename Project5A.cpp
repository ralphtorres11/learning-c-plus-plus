// This program assists a technician in the proces of checking the substance temperatures.
#include <iostream>
using namespace std;

int main()
{
   const double MIN_TEMP = 31.9;                     // Minimum temperature
   const double MAX_TEMP = 102.5;                    // Maximum temperature
   double temperature1, temperature2, temperature3;  // To hold the temperatures

   // Get the current temperatures.
   cout << "Please enter the 3 substance temperatures in Fahrenheit:" << endl;
   cin >> temperature1 >> temperature2 >> temperature3;

   // As long as necessary, instruct the technician to adjust the temperatures between 31.9 and 102.5.
   while (temperature1 < MIN_TEMP || temperature1 > MAX_TEMP || temperature2 < MIN_TEMP || temperature2 > MAX_TEMP || temperature3 < MIN_TEMP || temperature3 > MAX_TEMP)
   {
      cout << "Please ensure that all substance temperatures are set to be between " << MIN_TEMP << " and " << MAX_TEMP << "." << endl;
      cout << "Reenter the temperatures after 10 minutes of adjustment:" << endl;
      cin >> temperature1 >> temperature2 >> temperature3;
   }

   // Confirm that the temperatures are good.
   cout << "The temperatures are good, thank you." << endl;

   system("pause");
   return 0;
}