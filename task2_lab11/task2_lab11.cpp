#include <iostream>
using namespace std;

template<class x>
void swapnum(x &a,x &b)
{
    
    x temp;
    temp = a;
    a = b;
    b = temp;

}

int main()
{
    cout << "Enter the integers: ";
    int a, b;
    cin >> a>> b;
    cout << "\nIntegers before Swap: " << a << " " << b;
    swapnum(a, b);
    cout << "\nIntegers after Swap: " << a << " " << b;

    cout << "\nEnter the characters: ";
    char c, d;
    cin >> c>> d;
    cout << "\nCharacters before Swap: " << c << " " << d;
    swapnum(c, d);
    cout << "\nCharacters after Swap: " << c << " " << d;

    cout << "\nEnter the Double: ";
    double e, f;
    cin >> e >> f;
    cout << "\nDouble before Swap: " << e << " " << f;
    swapnum(e, f);
    cout << "\nDouble after Swap: " << e << " " << f;

  
}

