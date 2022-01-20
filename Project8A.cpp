//This program will let a user input a number and then determine whether it is in the existing array.

#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main()
{
	const int size = 18;
	int list[size] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
	int validation, number;

	cout << "Please input a number:" << endl;
	cin >> number;
	validation = linearSearch(list, size, number);

	if (validation != -1)
	{
		cout << "This number is valid. Thank you." << endl;
	}
	else
	{
		while (validation == -1)
		{
			cout << "This number is invalid. Please enter another number: " << endl;
			cin >> number;
			validation = linearSearch(list, size, number);
		}
		cout << "This number is valid. Thank you." << endl;
	}
}

int linearSearch(const int arr[], int size, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
	index++;
	}

return position;

}