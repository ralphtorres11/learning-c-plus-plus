// This program averages 4 student test scores at a time. It repeats as many times as the user wishes.
#include <iostream>
using namespace std;

int main()
{
   int score1, score2, score3, score4; // To hold the four scores
   double average;                     // To hold the average score
   string again;                       // To hold again input

   while (again != "exit")
   {
	   // To repeat it for 4 students
	   for (int x = 1; x <= 4; x++)
	   {
		   // Get four scores.
		   cout << "Please enter the 4 scores for student #" << x << " and I will average them: " << endl;
		   cin >> score1 >> score2 >> score3 >> score4;

		   // Calculate and display the average.
		   average = (score1 + score2 + score3 + score4) / 4.0;
		   cout << "The average score for student #" << x << " is " << average << "." << endl;
	   }

	   // Does the user want to average another set?
	   cout << "Do you want to average another set of scores? (yes/exit)" << endl;
	   cin >> again;
   }

   cout << "Thank you for using my averaging tool, goodbye." << endl;

   return 0;
}