#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;

	// Counter variables for loops.
	int count, i;

	int set1[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int set2[SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16 };
	int set3[SIZE];

	// Pointers.
	int *numPtr1 = nullptr;
	int *numPtr2 = nullptr;
	int *numPtr3 = nullptr;

	// Make numPtr point to the set array.
	numPtr1 = set1;
	numPtr2 = set2;
	numPtr3 = set3;

	// Use the pointer to display the array contents.
	cout << "The numbers in the first array are:" << endl;
	for (count = 0; count < SIZE; count++)
	{
		cout << *numPtr1 << " ";
		numPtr1++;
	}
	cout << endl << endl;

	// Use the pointer to display the array contents.
	cout << "The numbers in the second array are:" << endl;
	for (count = 0; count < SIZE; count++)
	{
		cout << *numPtr2 << " ";
		numPtr2++;
	}
	cout << endl << endl;

	cout << "The sum of the two arrays are:" << endl;
	for (i = 0; i < SIZE; i++)
	{
		set3[i] = set1[i] + set2[i];
		cout << set3[i] << " ";
	}

	cout << endl << endl;

	// Display the memory addresses
	cout << "The memory addresses in the new array are:" << endl;
	for (count = 0; count < SIZE; count++)
	{
		cout << numPtr3 << " ";
		numPtr3++;
	}

	cout << endl << endl;

	system("PAUSE");
	return 0;
}