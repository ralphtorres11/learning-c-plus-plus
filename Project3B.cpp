#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string name1, name2, name3;
	double test1_1{}, test1_2{}, test1_3{}, test2_1{}, test2_2{}, test2_3{}, test3_1{}, test3_2{}, test3_3{}, average1, average2, average3;
	


	//Input the first person's name and their three scores
	cout << "Enter the first name: " << endl;
	cin >> name1;
	cout << "Enter the first test score for " << name1 << ":" << endl;
	cin >> test1_1;
	cout << "Enter the second test score for " << name1 << ":" << endl;
	cin >> test1_2;
	cout << "Enter the third test score for " << name1 << ":" << endl;
	cin >> test1_3;

	//Input the second person's name and their three scores
	cout << "Enter the second name: " << endl;
	cin >> name2;
	cout << "Enter the first test score for " << name2 << ":" << endl;
	cin >> test2_1;
	cout << "Enter the second test score for " << name2 << ":" << endl;
	cin >> test2_2;
	cout << "Enter the third test score for " << name2 << ":" << endl;
	cin >> test2_3;

	//Input the third person's name and their three scores
	cout << "Enter the third name: " << endl;
	cin >> name3;
	cout << "Enter the first test score for " << name3 << ":" << endl;
	cin >> test3_1;
	cout << "Enter the second test score for " << name3 << ":" << endl;
	cin >> test3_2;
	cout << "Enter the third test score for " << name3 << ":" << endl;
	cin >> test3_3;

	//Calculate the average for each person
	average1 = (test1_1 + test1_2 + test1_3) / 3.0;
	average2 = (test2_1 + test2_2 + test2_3) / 3.0;
	average3 = (test3_1 + test3_2 + test3_3) / 3.0;

	//Format and display the the average scores for each user
	cout << endl << "Average Scores" << endl;
	cout << "--------------" << endl;
	cout << setprecision(2) << fixed;
	cout << setw(5) << name1 << ": " << setw(5) << average1 << endl;
	cout << setw(5) << name2 << ": " << setw(5) << average2 << endl;
	cout << setw(5) << name3 << ": " << setw(5) << average3 << endl;

	system("pause");
	return 0;
}