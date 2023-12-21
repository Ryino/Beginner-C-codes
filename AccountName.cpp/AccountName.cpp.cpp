// AccountName.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "Account.h"


using namespace std;

int main()
{
	Account myAccount;
	cout << "The initial name is " << myAccount.getName()<<endl;

	cout << "Please enter your name:";
	string theName;
	getline(cin, theName);
	myAccount.setName(theName);

	cout << "Name in object myAccount is:" << endl
		<< myAccount.getName() << endl;

}

