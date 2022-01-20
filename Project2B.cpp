#include <iostream>
using namespace std;
int main()
{
	string name = "Harman Smith";
	double salary = 1500.0;
	int numAddress = 222;
	string streetAddress = "Main St.";
	string city = "Houston";
	string state = "TX";
	int zipCode = 77002;
	char gender = 'M';
	double totalSalary = salary * 1.5;

	cout << "The calculated salary for " << name << " is $" << totalSalary << "." << endl;
	cout << "Identified as a " << gender << " and living at" << endl;
	cout << numAddress << " " << streetAddress << endl;
	cout << city << " " << state << " " << zipCode << endl;

   system ("pause");
   return 0;
} 
