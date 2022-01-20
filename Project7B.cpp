// This program demonstrates the range-based for loop on various arrays.

#include <iostream>
using namespace std;
int main()
{
	//Define various arrays
	double DoubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	int IntArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char UcharArray[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char LcharArray[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string StringArray[] = { "AAA","aaa","BBB","bbb","CCC","ccc","DDD","ddd","EEE","eee","FFF","fff","GGG","ggg","HHH","hhh","III","iii","JJJ","jjj","KKK","kkk","LLL","lll","MMM","mmm", "NNN", "nnn", "OOO", "ooo","PPP","ppp","QQQ","qqq","RRR","rrr","SSS","sss","TTT","ttt","UUU","uuu","VVV","vvv","WWW","www","XXX","xxx","YYY","yyy","ZZZ","zzz" };

	//Loops to display the various array values
	cout << "Here are the values in DoubleArray:" << endl;
	for (auto val : DoubleArray)
		cout << val << endl;
	cout << endl;

	cout << "Here are the values in IntArray:" << endl;
	for (auto val : IntArray)
		cout << val << endl;
	cout << endl;

	cout << "Here are the values in UcharArray:" << endl;
	for (auto val : UcharArray)
		cout << val << endl;
	cout << endl;

	cout << "Here are the values in LcharArrayArray:" << endl;
	for (auto val : LcharArray)
		cout << val << endl;
	cout << endl;

	cout << "Here are the values in StringArray:" << endl;
	for (auto val : StringArray)
		cout << val << endl;
	cout << endl;

	system("pause");
	return 0;
}
