// assignment1.cpp 

#include <iostream>
#include<string>
#include "2021535_header.h"
using namespace std;

int main()
{
    Rectangle rec;
    cout << "Please enter the length:";
    float x;
    cin >> x;
    cout << "Please enter the width:";
    float y;
    cin >> y;
    rec.setLength(x);
    rec.setWidth(y);
    rec.rectangle(x, y);

    cout << "\n The perimeter is :";
    float peri;
   peri= rec.perimeter(x, y);
      cout << peri<<endl;

      cout << "your area is:";
      float are;
    are=rec.area(x, y);
    cout << are<<endl;

    cout << "the diagonal length is :";
    float di;
       di= rec.diagLength(x, y);
       cout << di;

}

