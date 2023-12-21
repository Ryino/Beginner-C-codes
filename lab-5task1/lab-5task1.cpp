#include <iostream>
using namespace std;


class student
{
private:
	std::string name;
public:
	student()
	{
		name = "Unknown";
		std::cout << name;
	}

	student(string nameof)
	{
		name = nameof;
		std::cout << name;
	}
	/*student(std::string n)
	{
		std::cout << "Enter a name:";
		std::cin >> n;
		name = n;
		std::cout << std::endl<<"Name of student: "<<name;
	}*/

};


int main()
{
	student c = student();
	student v = student("ali");
	string x="hamza";
	student n = student(x);

    
   
}
