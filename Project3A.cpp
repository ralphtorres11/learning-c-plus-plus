#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	double y1, y2, y3, y4, y5;
	
	cout << "Enter the values for a, b, and c:" << endl;
	cin >> a >> b >> c;

	y1 = 12 * a;
	y2 = (5 * a) + (14 * b) + (6 * c);
	y3 = pow(a, 4);
	y4 = (a + 12) / (4 * b);
	y5 = pow(a, 3) / (pow(b, 2) - pow(c, 4));

	cout << "y1 = " << y1 << endl;
	cout << "y2 = " << y2 << endl;
	cout << "y3 = " << y3 << endl;
	cout << "y4 = " << y4 << endl;
	cout << "y5 = " << y5 << endl;

	system("pause");
	return 0;
}