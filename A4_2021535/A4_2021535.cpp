#include<iostream>
#include "Header.h"

using namespace std;

int main() 
{
	int s, w, st;
	cout << "KIndly enter the speed,weight and the storage of the computer respectively:" << endl;
	cin >> s 
		>> w 
		>>st;

	int a;
		cout << "Enter size of computer: " << endl;
	cin >> a;
	string b, c;
	cout << "Enter type of internet connectivity and enter the operating system being used : " << endl;
	cin >> b >> c;

	string t, v;
	cout << " Does it have touchscreen (type yes or no)?Does it have Video facillity(type yes or no) " << endl;
	cin >> t
		>> v;


	laptop l;
	l.setvalue(s, w, st);
	l.getvalues();
	l.setdata(a, b, c);
	l.getdata();
	l.setip();
	l.getip();
	l.set(t, v);
	l.get();



	





}
