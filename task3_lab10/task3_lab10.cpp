#include <iostream>
using namespace std;

void print(int* a)
{
	cout << a;
}

int main()
{
	cout << "Number:";
	const int a=5;
	cout << a;
	const int* b = &a;
	int* d;
	d=const_cast<int*>(b);
	cout << "\nThe value of ptr cast:";
	*d = 500;
	cout << *d;

}

