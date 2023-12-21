#include<string>

class Automobile

{
private:
	//4 types of information taken for automobile
	int tyres;
	int maxSpeed;
	std::string engineType;
	int horsePower;



public:
	// functions to store values 
	void wheels(int tyreNum)
	{
		tyres = tyreNum;
		std::cout << "Your dream car has:" << tyreNum << " tyres";
	}
	void maximumSpeed(int speed)
	{
		maxSpeed = speed;
		std::cout << " and a top speed of " << maxSpeed<<"!"<<std::endl;
	}
	void engine(std::string name)
	{
		engineType = name;
		std::cout << "The engine installed is:" << engineType<< std::endl;
	}
	void power(int pow)
	{
		horsePower = pow;
		std::cout << "This will have a horse power of:" << horsePower <<" Watts" << std::endl;
	}
};
