#include <iostream>
using namespace std;
struct node
{
    int data;// store data
    struct node* next;//link it to the next node 

};
node* insert(node* h, int a)
{
    node* n_ptr;// declare node pointer
    n_ptr = new node;
    n_ptr->data = a;// connected with integer a
    n_ptr->next = NULL ;

    if (h == NULL)
    {
        h = n_ptr;
    }

    else {
        n_ptr->next = h;
        h = n_ptr;
    }

    return h;
}





int main()
{
    int x;
    struct node* head = NULL;
    cout << " enter value of x" << endl;
    cin >> x;
    for(int i=0;i<=x;i++)
    insert(head, x);

    node* node_ptr = head;

    while (node_ptr != NULL)
    {
        cout << node_ptr->data << "\t";
        cout << endl;

        node_ptr = node_ptr->next;
    }
    return 0;
}
