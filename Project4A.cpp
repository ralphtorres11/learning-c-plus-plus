// This program gets a test score and determines whether it is a passing, middle, or failing grade.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name1, name2, name3; // to hold the three user names
    double test1, test2, test3; // to hold the three user test scores
    char greaterThan60, lessThan60, equalTo60;

    // Get the first name and test score
    cout << "Please enter the first person's name and their test score." << endl;
    cin >> name1 >> test1;

    //Ask if the test score is greater than, less than, or equal to 60
    cout << "Answer the following questions with either Y for Yes or N for No." << endl;
    cout << "You can only answer with Y once." << endl;
    cout << "Is " << name1 << "'s score greater than 60?" << endl;
    cin >> greaterThan60;
    cout << "Is " << name1 << "'s score less than 60?" << endl;
    cin >> lessThan60;
    cout << "Is " << name1 << "' score equal to 60?" << endl;
    cin >> equalTo60;

   if (greaterThan60 == 'Y')
   {
       cout << name1 << " passed." << endl;
   }
   else
   {
       if (lessThan60 == 'Y')
       {
           cout << name1 << " failed." << endl;
       }
       else
       {
           cout << name1 << " is in the middle." << endl;
       }
   }

   // Get the second name and test score
   cout << "Please enter the second person's name and their test score." << endl;
   cin >> name2 >> test2;

   //Ask if the test score is greater than, less than, or equal to 60
   cout << "Answer the following questions with either Y for Yes or N for No." << endl;
   cout << "You can only answer with Y once." << endl;
   cout << "Is " << name2 << "'s score greater than 60?" << endl;
   cin >> greaterThan60;
   cout << "Is " << name2 << "'s score less than 60?" << endl;
   cin >> lessThan60;
   cout << "Is " << name2 << "' score equal to 60?" << endl;
   cin >> equalTo60;

   if (greaterThan60 == 'Y')
   {
       cout << name2 << " passed." << endl;
   }
   else
   {
       if (lessThan60 == 'Y')
       {
           cout << name2 << " failed." << endl;
       }
       else
       {
           cout << name2 << " is in the middle." << endl;
       }
   }

   // Get the first name and test score
   cout << "Please enter the third person's name and their test score." << endl;
   cin >> name3 >> test3;

   //Ask if the test score is greater than, less than, or equal to 60
   cout << "Answer the following questions with either Y for Yes or N for No." << endl;
   cout << "You can only answer with Y once." << endl;
   cout << "Is " << name3 << "'s score greater than 60?" << endl;
   cin >> greaterThan60;
   cout << "Is " << name3 << "'s score less than 60?" << endl;
   cin >> lessThan60;
   cout << "Is " << name3 << "' score equal to 60?" << endl;
   cin >> equalTo60;

   if (greaterThan60 == 'Y')
   {
       cout << name3 << " passed." << endl;
   }
   else
   {
       if (lessThan60 == 'Y')
       {
           cout << name3 << " failed." << endl;
       }
       else
       {
           cout << name3 << " is in the middle." << endl;
       }
   }

   system("pause");
   return 0;
} 