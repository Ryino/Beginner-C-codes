#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string uniName;
	string compName;
public:
	friend class Coordinator;
	Person()
	{
		cout << "Enter competition and University name:";
		cin >> compName >> uniName;
	}

};

 class Coordinator
{
public:
	void checkRoom(Person obj, Person obj2)
	{
		if (obj.uniName == obj2.uniName)
		{
			cout << "Person 1 and two are roomates,";
			int a = obj.compName.length();
			int b = obj2.compName.length();
			if (a > b)
			{
				cout << "and the room number is " << a;
			}
			else if (b > a)
			{
				cout << "and the room number is " << b;

			}
			else
			{
				cout << "Invalid!";
			}
		}
		else
		{
			cout << "1 and 2 are not roomates!";
		}
		
		
	}


};
int main()
{
	Person a;
	Person b;
	Coordinator c;
	c.checkRoom(a, b);
}


