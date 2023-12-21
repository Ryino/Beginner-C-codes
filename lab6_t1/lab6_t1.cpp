#include <iostream>
using namespace std;

class khan
{
private:
    int number;

public:
    khan()
    {
        cout << "Khan listens";
        cout << "\nEnter a number:";
        int n;
        cin >> n;
        number = n;

    }
    friend void taimoor();
};

void taimoor()
{
    
    khan k;
    int rev;
   cout << "Taimoor speaks:\n the reverse of "<<k.number<<" is ";
   rev= k.number;

   while (rev != 0)
   {
       cout << rev % 10;
       rev = rev / 10;
   }
}
int main()
{
    taimoor(); 

    
    
}
