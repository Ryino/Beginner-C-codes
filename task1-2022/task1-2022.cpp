#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int num)
    {
        this->data = num;
        this->next = NULL;
    }
};
class link_list
{

public:
    node* head = NULL;
    void traverse()
    {
        node* temp;
        temp = this->head;
        if (head == NULL)
        {
            cout << "THe list is empty!\n";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << "-->";
                temp = temp->next;
            }
            cout << "null\n";
        }
    }

    void add_element(int data)
    {

        node* n = new node(data);
        n->next = head;
        head = n;
    }

    void add_after(int data, int index)
    {
        if (head == NULL)
        {
            add_element(data);
        }
        else
        {
            node* n = new node(data);
            node* temp = head;
            while (temp->data != index && temp != NULL)
            {
                temp = temp->next;
            }

            n->next = temp->next;
            temp->next = n;
        }
    }

    void delete_node(int val)
    {
        node* temp = head;

        while (temp->next->data != val && temp != NULL)
        {
            temp = temp->next;
        }
        if (temp == NULL)
            cout << "Element not found!";
        else
        {
            node* to_delete = temp->next;
            temp->next = temp->next->next;

            delete to_delete;

        }
    }
};
int main()
{
    link_list l;
    l.traverse();
    l.add_element(3);
    l.add_element(4);
    l.add_element(5);
    l.traverse();
    l.add_after(7, 4);
    l.traverse();
    l.delete_node(1);

    l.traverse();
}