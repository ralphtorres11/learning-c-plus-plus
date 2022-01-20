// This program will take the following char and string sentence and do the following:
// Change all characters to uppercase.
// Count the elements that is not a character, digit, or whitespace.
// Change all the whitespaces to dashes.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Prototype
void showArray(char arr[], int);
void upperArray(char* str);
void hyphenArray(char* str);

int main()
{
	// Define variables
	const int SIZE = 75;
	char chars1[SIZE] = "I am taking Programming Fundamentals II class, COSC 1337 at room # 13.731.";
	string chars2 = "I am taking Programming Fundamentals II class, COSC 1337 at room # 13.731.";
	int x, count = 0;

	// Display the char array.
	cout << "Take the following sentence: " << endl << chars1 << endl << endl;

	// Display each element of the char array on one line. 
	cout << "The following shows each element of the sentence on one line: " << endl;
	showArray(chars1, SIZE);

	// Convert the char array to all uppercase.
	upperArray(chars1);
	cout << "In all uppercase, it shows: " << endl << chars1 << endl << endl;

	// Count the number of digits and whitespaces in the string.
	for (x = 0; x < chars2.length(); x++)
	{
		if (isdigit(chars2.at(x)) || isspace(chars2.at(x)))
		{
			count++;
		}
	}
	// Display the number of digits and whitespaces in the string.
	cout << "The total number of elements that are either digits or whitespaces is: " << endl << count << endl << endl;

	// Update the char array with hyphens in place of the whitespaces.
	hyphenArray(chars1);
	cout << "By replacing the whitespaces with hyphens, it shows: " << endl << chars1 << endl << endl;

	system("PAUSE");
	return 0;
}

// The showArray function displays each element in the char array on one line.
void showArray(char arr[], int size)
{
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << endl;
	}
}

// The upperArray function converts the char array to all uppercase.
void upperArray(char* str)
{
	for (int x = 0; str[x] != '\0'; x++)
	{
		str[x] = toupper(str[x]);
	}
}

// The hyphenArray function updates the char array with hyphens in place of the whitespaces.
void hyphenArray(char* str)
{
	for (int x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ')
			str[x] = '-';
	}
}