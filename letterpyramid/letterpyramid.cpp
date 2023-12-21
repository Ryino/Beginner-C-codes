#include <iostream>
#include<string>
using namespace std;



int main()
{
    string str;
    cout << "Enter a string:";
    cin >> str;
    int number{};
    for (int i = 1; i <= str.length(); i++)
    {
        for (int l = str.length(); l > i; l--)
        {
            cout << " ";

        }
      
        for (int k = 1; k <= i; k++)

        {
            number++;
            cout << str[number];
        }

        for (int j = 1; j < i; j++)
        {
            number--;
            cout << str[number];
        }
           
        cout << endl;
    }

}

