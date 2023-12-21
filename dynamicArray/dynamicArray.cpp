#include <iostream>
using namespace std;
#define SIZE 3

int main()
{
	int* arr = new int[SIZE];

	cout << "Array:";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	int res=0;
	for (int i = 0; i < SIZE; i++)
	{
	
		res += arr[i];

	}

	
		cout<< res;
	


	






}

