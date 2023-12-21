#include <iostream>
using namespace std;

template<class x>
x square(x &a )
{
    x res;
    res = a * a;
    return res;

}

int main()
{
    cout << "Enter a number to be squared";
    cout << "\nfor integer:";
    int a;
    cin >> a;
    int result;
   result= square(a);
   cout << result;

   cout << "\nfor float:";
   float b;
   cin >> b;
   float result1;
   result1 = square(b);
   cout << result1;


    
}

