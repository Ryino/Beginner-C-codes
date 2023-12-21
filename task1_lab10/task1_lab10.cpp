#include <iostream>
using namespace std;


int main()
{
    cout << "Enter Value for first variable:";
    int a;
    cin >> a;
    cout << "Enter Value for the third variable:";
    int b;
    cin >> b;
    cout << "Enter Value for the fourth variable:";
    char ab;
    cin >> ab;
    cout << "Enter Value for the fifth variable:";
    char cd;
    cin >> cd;

    cout << "First vatiable is:" << a;
    cout << "\nSecond variable is:" << a;
    cout << "\nType casting char to int data type(third + fourth)=";
    int res;
    res = b + ab;
    cout << res;

    cout << "\nType casting from int to float data type (third + fifth)=";
    float res1;
    res1 = b + cd;
    cout << res1;




}

