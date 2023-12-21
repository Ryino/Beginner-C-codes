#include <iostream>

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

	student(std::string nameof = "Ali")
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

