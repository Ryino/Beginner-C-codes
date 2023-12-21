#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r , int i)
    {
        real = r;
        imag = i;

    }
    Complex()
    {
        real = 0;
        imag = 0;

    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;

    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = imag + c.imag;
        return temp;
   
    }

};
int main()
{
    Complex C1(5, 4);
    Complex C2(2, 9);
    Complex C3;
    C3 = C1 + C2;
    C3.print();
}

