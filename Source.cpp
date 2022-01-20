#include <iostream>
#include <string>
using namespace std;
void showArray(char arr[])
{
	for (int index = 0; index < strlen(arr); index++)
		cout << arr[index] << " ";
	cout << endl << endl;
}
void showArraylines(char arr[])
{
	for (int index = 0; index < strlen(arr); index++)
		cout << arr[index] << "\n";
	cout << endl << endl;
}
char* upperArray(char arr[])
{
	for (int index = 0; index < strlen(arr); index++)
		arr[index] = toupper(arr[index]);
	return arr;
}
int countArray(char arr[])
{
	int count = 0;
	for (int index = 0; index < strlen(arr); index++)
	{
		if (!(isalpha(arr[index])) && !(isdigit(arr[index])) && !(isspace(arr[index])))
			count++;
	}
	return count;
}
char* dashArray(char arr[])
{
	for (int index = 0; index < strlen(arr); index++)
		if (isspace(arr[index]))
			arr[index] = '-';
	return arr;
}
int main()
{
	char chars[] = { "I am taking Programming Fundamentals II class, COSC 1337 at room # 13.731."};
	cout << "The contents of the original array are:\n";
	showArraylines(chars);
	showArray(upperArray(chars));
	cout << "The array elements that is not character, digit, or whitespace = " << countArray(chars) << endl;
	showArray(dashArray(chars));
	system("PAUSE");
	return 0;
}

