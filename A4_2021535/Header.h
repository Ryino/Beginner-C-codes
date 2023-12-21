#include<iostream>
using namespace std;

class computer 

{

private:
	int speed;
	int weight;
	int storage;

public:

	void setvalue(int s, int w, int st)
	{
		speed = s;
		weight = w;
		storage = st;
	}
	void getvalues() 
	{
		cout << "\nThe speed is: " << speed;
		cout << "\nThe weight is: " << weight ;
		cout << "\nThe storage is: " << storage ;
	}
	virtual void dispalyC()
	{

	}
	virtual void setip() = 0;
	virtual void getip() = 0;


};

class desktop : public computer
{

private:

	int size;
	string type;
	string os;
	int ip;

public:

	void setdata(int siz, string typ, string oSystem)
	{
		size = siz;
		type = typ;
		os = oSystem;
	}

	void getdata()
	{
		cout << "\nSize of monitor: " << size << endl;
		cout << "Type of network connectivity is: " << type << endl;
		cout << "OS being used is:  " << os << endl;
	}

	virtual void dispalyC() 
	{

	}

	void setip() 
	{
		int ip_address;
		cout << "Kindly enter the IP address: " << endl;
		cin >> ip_address;
		ip = ip_address;
	}

	void getip()
	{
		cout << "The IP of laptop is :" << ip << endl;

	}

};

class laptop : public desktop 
{
private:
	string touch;
	string video;
	int ip;

public:
	void set(string touchScreen, string vFacility) 
	{
		touch = touchScreen;
		video = vFacility;

	}

	void get() 
	{
		cout << "\nis it touchscreen :" << touch << endl;
		cout << "has video facility :" << video << endl;

	}

	void setip()
	{
		int ipAddress;
		cout << "\nEnter the ip for laptop :" << endl;
		cin >> ipAddress;
		ip = ipAddress;
	}

	void getip() {
		cout << "The IP of laptop is :" << ip << endl;
	}
	virtual void dispalyC()
	{
	}



};

