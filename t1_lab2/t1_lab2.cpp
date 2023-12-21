#include <iostream>
#include "2021535_task1.h"
using namespace std;


int main()
{
    cout << "Enter a number:";
    int a;
    cin >> a;

    cout << "\nEnter second number:";
    int b;
    cin >> b;

    cout << "Enter functionality to be preformed:";
    string funct;
    cin >> funct;

	int res;
	if (funct == "SUM")
	{
		
		res = add(a,b);
	}
	else if (funct == "MULT")
	{

		res = MUlT(a, b);
	}
	else if (funct == "sub")
	{

		res = sub(a, b);
	}
	else if (funct == "divide")
	{
		res = divi(a, b);

	}
	else if (funct == "power")
	{
		res = power(a, b);

	}
	else if (funct == "modulus")
	{
		res = modulus(a, b);
	}
	else
	{
		cout << "Please enter valid operation!(SUM,MULT,sub,divide,power,modulus)";

	}
	cout << "\nYour result is: " << res;


}

