#include <iostream>

using namespace std;

#define LIMIT 5
#define loop(x) for(int i=x; i<LIMIT;i++)// macro used for loop 

int main() 
{

   
    int array[LIMIT];

    cout << "Enter scores of person: ";

    loop(0) 
    {  
         cin >> array[i];

    }

    loop(0) 
    {

        if (array[i] <= 1)// if condition for numbers less than 2
        {
            array[i] = false;
        }

        if (array[i] == 2)
        {
            array[i] = 1;//that is true
        }
        // logic for prime numbers below 
        int n = 2;
        while (n < array[i])
        {

            if (array[i] % n == 0) {

                array[i] = false;

            }
            else
            {
                array[i] = true;
            }

        }
    }
    // prime numbers deined with true 
    cout << "The following person/s are happy : ";

    loop(0)
    {

        if (array[i] == false)
        {
            cout << i + 1 << " ";
        }
    }

    cout << "\nThe following person/s are upset : ";

    loop(0)
    {
        if (array[i] == true)
        {
            cout << i + 1 << " ";
        }

    }


}