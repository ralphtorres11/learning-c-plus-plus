// This program will let a user enter 10 values into an array.
// It will then call 2 functions to find and display the smallest and largest values.

#include <iostream>
using namespace std;

void findSmallestValue(int values[], int arraySize)
{
	int number = values[0];
	for (int i = 0; i < arraySize; i++)
	{
		if (number > values[i])
			number = values[i];
	}
	
	cout << "The smallest value is " << number << "." << endl;
}

void findLargestValue(int values[], int arraySize)
{
	int number = values[0];
	for (int i = 0; i < arraySize; i++)
	{
		if (number < values[i])
			number = values[i];
	}

	cout << "The largest value is " << number << "." << endl;
}

int main()
{
	const int arraySize = 10;
	int values[arraySize];
	
	cout << "Please enter 10 values: " << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cin >> values[i];
	}

	findSmallestValue(values, arraySize);
	findLargestValue(values, arraySize);

	return 0;
}

