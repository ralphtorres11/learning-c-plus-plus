// This program will use a for loop to display the characters for ASCII codes 0 through 255.
// There will be 16 characters displayed per line.
#include <iostream>
using namespace std;

int main()
{
	char asciiCode;

	for (int i = 0; i <= 255; i++)
	{
		asciiCode = i;

		cout << asciiCode << " ";

		if (i % 16 == 0)
			cout << endl;
	}

	return 0;
}