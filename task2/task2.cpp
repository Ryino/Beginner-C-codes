

#include <iostream>
#include<string>
//header file 
#include "Automobile.h"

using namespace std;

int main()
{// information taken from the user
	cout << "\tLets design a custom car!\t"; 
	cout << endl;

	cout << "How many tyres do you want your Automobile to have?"<<endl;
	int x;
	cin >> x;

	cout << "\nWhat is your desired maximum speed of your car?";
	int y;
	cin >> y;

	cout << "What Engine do you want to install?" << endl;
	string a;
	getline(cin>>ws, a);

	cout << "How much horsepower do you expect your car to be?";
	int z;
	cin >> z;
	
	Automobile cust;
	//a custom automobile based on the users preference is being made
	cust.wheels(x);
	cust.maximumSpeed(y);
	cust.engine(a);
	cust.power(z);
	cout << "\tThank You!\t";




}
