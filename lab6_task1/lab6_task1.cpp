#include <iostream>
using namespace std;

class khan
{
private:
    int num;

public:
    void listens()
    {
        cout << "Khan listens";
        cout << "/nEnter a number:";
        cin >> num;
    }
    friend void taimoor();
};
void taimoor()
{
   
    khan onj;
    onj.listens();
    cout << "Taimoor speaks/n";
    cout<<onj.num;

}
int main()
{
    taimoor();
}


