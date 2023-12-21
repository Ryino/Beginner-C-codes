
#include<fstream>

#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    char array[100];
    cout << " enter your name and ID";
    cin.getline(array, 100);
    
    fstream f1;
    f1.open("ehs.txt");
    f1 >> array;
    f1 << arr[100];
    f1.close();
}

