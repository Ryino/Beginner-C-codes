#include <iostream>
using namespace std;

void arrange(int a[],int s)
{
    for (int i = 0; i < s; i++)
    {
       
        for (int j = i+1; j < s; j++)
        {
            if (a[i] < a[j])
            {
                 int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
          
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout<<a[i];
    }
    cout << "Second highest:"<<a[1];


}

int main()
{
    int size;
    cout << "Enter array size:";
    cin >> size;

    int* arr;
    arr = new int[size];
    cout << "Enter elements of array:";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    arrange(arr, size);
}
   
