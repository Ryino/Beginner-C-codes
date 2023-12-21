
#include <iostream>
#include<string>
using namespace std;
// struct defined 
struct car
{
	string manu;
	string model;
	int year;
	int seats;


};
int main()
{//user defined 
	car customCar;
	//taking input from user 
	cout << "Enter car manufacturer:";
	getline(cin>>ws, customCar.manu);
	cout << "\nEnter car model";
	getline(cin>>ws, customCar.model);
	cout << "\nEnter car manufacturing year:";
	cin >> customCar.year;
	cout << "\nEnter number of seats:";
	cin >> customCar.seats;
	//price will be used to convert manufacturer in to an int variable 
	int price=NULL;

	if (customCar.manu == "Toyota" || customCar.manu == "toyota")
	{
		 price = 2000;
	}
	else if (customCar.manu == "Honda" || customCar.manu == "honda")
	{
		price = 2500;
	}
	else if (customCar.manu == "Suzuki" || customCar.manu == "suzuki")
	{
		price = 1000;
	}
	else if (customCar.manu == "BMW" || customCar.manu == "bmw")
	{
		price = 5000;
	}
	//formula used to find the result and then displayed on the screen 

	int result;
	result = price * (customCar.year + customCar.seats);

	cout << "The Estimated Price of the given car is :" << result << endl;

}
