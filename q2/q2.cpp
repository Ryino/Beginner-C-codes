#include <iostream>
using namespace std;
#define LIMIT 5
#define time(x) for(int i=x; i<LIMIT;i++)

int main() {

    int j = 2;

    int array[LIMIT];

    cout << "Enter elements of the array : ";
    time(0) {

        cin >> array[i];

    }

    time(0) {

        if (array[i] <= 1)
            array[i] = 0;
        if (array[i] = 2)
            array[i] = 1;

        while (j < array[i]) {

            if (array[i] % j == 0) {

                array[i] = 0;

            }
            else
            {
                array[i] = 1;
            }

        }

    }

    cout << "The following person/s are happy: ";
    time(0)
    {

        if (array[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << "\nThe following person/s are upset: ";
    time(0)
    {
        if (array[i] == 1)
        {
            cout << i + 1 << " ";
        }

    }


}