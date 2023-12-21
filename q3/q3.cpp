#include<iostream>
using namespace std;
#define prod(num1, num2) num1&num2;// macro defined for AND 

int main()
{
	cout << "Please eneter an integer value: ";
	float numCheck;
	cin >> numCheck;

	int x = numCheck;// value before decimal point stored 

	if ((numCheck - x) == 0) // if condition used for checking float 
	{
		int y = x - 1;
		int finalResult; 
		finalResult = prod(x, y);

		if (finalResult == 0)// if conditoin to check power of 2
		{
			cout << x << " is the power of 2" ;
		}
		else
		{
			cout << x << " is not the power of 2" << endl;
		}
	}
	else {
		cout << "Floating number has been entered,kindly try again.";
	}
}