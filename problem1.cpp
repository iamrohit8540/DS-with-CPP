#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
void traverse(node *ptr)
{
    for (int i = 0; ptr != NULL;i++)
    {
        cout << "Element "<<i<<" is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    node *head;
    node *first;
    node *second;
    node *third;
    node *fourth;
    node *fifth;
    node *sixth;
    node *seventh;
    node *eighth;
    node *ninth;

    head = (node *)calloc(1, sizeof(node));
    first = (node *)calloc(1, sizeof(node));
    second = (node *)calloc(1, sizeof(node));
    third = (node *)calloc(1, sizeof(node));
    fourth = (node *)calloc(1, sizeof(node));
    fifth = (node *)calloc(1, sizeof(node));
    sixth = (node *)calloc(1, sizeof(node));
    seventh = (node *)calloc(1, sizeof(node));
    eighth = (node *)calloc(1, sizeof(node));
    ninth = (node *)calloc(1, sizeof(node));

    head->data = 0;
    head->next = first;
 
    first->data = 1;
    first->next = second;
 
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 6;
    seventh->next = eighth;

    eighth->data = 8;
    eighth->next = ninth;

    ninth->data = 9;
    ninth->next = NULL;

    traverse(head);

    return 0;
}