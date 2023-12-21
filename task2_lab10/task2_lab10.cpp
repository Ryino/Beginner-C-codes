#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the first value:";
	int a;
	cin >>  a;
	cout << "Enter the second value:";
	int b;
	cin >> b;
	cout << "Implicit type casting:";
	int res;
	res = a / b;
	cout << res;

	cout << "\nExplicit type casting:";
	float res1;
	res1 = (float)a / b;
	cout << res1;

}
