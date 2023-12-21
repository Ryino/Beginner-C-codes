#include <iostream>
#include<vector>
#define loop(SIZE) for (int i = 0; i < SIZE; i++)
using namespace std;


int main()
{
	vector<int> a;
	cout << a.size() << endl;
	loop(5)
	{
		a.push_back(i);
	}
	cout<<a.size()<<endl;
	loop(a.size())
	{
		cout << a[i]," ";
	 }
	

}
