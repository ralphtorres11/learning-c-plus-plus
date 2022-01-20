#include <iostream>
using namespace std;
int main()
{
	double gamePrice = 10.00;
	double coffeePrice = 2.00;
	double aspirinPrice = 5.00;

	int gameQuantity = 20;
	int coffeeQuantity = 25;
	int aspirinQuantity = 10;

	double gameEarnings = gameQuantity * gamePrice;
	double coffeeEarnings = coffeeQuantity * coffeePrice;
	double aspirinEarnings = aspirinQuantity * aspirinPrice;

	double companyEarnings = gameEarnings + coffeeEarnings + aspirinEarnings;

    cout << "The following items were top sellers during the month of June:" << endl;
    cout << "Computer Games $" << gameEarnings << endl;
    cout << "Coffee $" << coffeeEarnings << endl;
    cout << "Aspirin $" <<aspirinEarnings << endl;
    cout << "The company earned a total of $" << companyEarnings << endl;

    system ("pause");
    return 0;
} 
