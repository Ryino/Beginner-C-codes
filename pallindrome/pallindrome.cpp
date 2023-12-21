// pallindrome.cpp 
#include <iostream>
using namespace std;

int main()
{
    int num,n,temp,rev=0;
    cout << "Enter a number:";
    cin >> num;

    n = num;
    do 
    {
        temp = num % 10;
        rev = (rev * 10) + temp;
        num = num / 10;
        
    } while (num != 0);

    cout << rev;

}
