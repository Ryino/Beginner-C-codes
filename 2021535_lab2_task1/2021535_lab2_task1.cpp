#include <iostream>
#include <string>
#define SUM(f, s) (f + s)
#define MULT(f,s) (f*s)
#define SUB(f,s) (f-s)

using namespace std;
int main()
{
	int f1, s1;
	cout << "Enter first number:";
	cin >> f1;
	cout << "\n Enter second number:";
	cin >> s1;
	cout << "\nEnter functionality to be preformed:";
	string funct;
	getline(cin>>ws, funct);

	int res;
	if (funct == "SUM")
	{
		;
		res = SUM(f1, s1);
	}
	else if (funct == "MULT")
	{
		
		res = MULT(f1, s1);
	}
	else if (funct == "sub")
	{
		
		res = SUB(f1, s1);
	}
	else if(funct="")

	

	

	return 0;
}