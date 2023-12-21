#include<iostream>
using namespace std;

void add( int first[], int second[],int sum[],int a)
{
    for (int c = 0; c < a; c++)
    {
        sum[c] = first[c] + second[c];
    }
}

void mult2(int first[], int mult[], int a)
{
    for (int c=0;c<a;c++)
    {
        mult[c] = first[c] * first[c];
    }
}

int main()
{
    cout << "Enter the size of arrays: " << endl;
    int a;
    cin >> a;


    int first['a'], second['a'];
  
    cout << "Enter elements of first array" << endl;

    for (int i = 0; i < a; i++)
        cin >> first[i];

    cout << "Enter elements of second array" << endl;

    for (int i = 0; i < a; i++)
        cin >> second[i];
    int sum['a'];
    
    add(first, second, sum, a);
    cout << "Result is: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << sum[i]<< endl;
    }

    int mult['a'];

    mult2(first,  mult, a);
    cout << "The sqaure of the array is  " << endl;
    for (int i = 0; i < a; i++)
        cout << mult[i] << endl;



    return 0;
}