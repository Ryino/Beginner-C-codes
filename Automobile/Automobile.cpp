#include<string>

class Automobile

{
private:
	int tyres;
	int maxSpeed;
	std::string engineType;
	int horsePower;



public:
	void wheels(int tyreNum)
	{
		tyres = tyreNum;
	}
	void maximumSpeed(int speed)
	{
		maxSpeed = speed;
	}
	void engine(std::string name)
	{
		engineType = name;
	}
	void power(int pow)
	{
		horsePower = pow;
	}
};
