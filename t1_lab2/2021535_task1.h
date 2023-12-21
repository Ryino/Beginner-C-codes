
#include <iostream>

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int MUlT(int a, int b)
{
	int c;
	c = a * b;
	return c;
}

int sub(int a, int b)
{
	int c;
	c = a - b;
	return c;
}
int divi(int a, int b)
{
	int c;
	c = a / b;
	return c;
}

int power(int a, int b)
{
	int c;
	c = pow(a, b);
	return c;
}
int modulus(int a, int b)
{
	int c;
	c = a % b;
	if (c != 0)
	{
		std::cout << "Please enter integer values!";
	}
	return c;
}