#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    for (int i = 0; ptr != NULL;i++)
    {
        cout << "Element "<<i<<" is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;
    struct node *eighth;
    struct node *ninth;

    head = (struct node *)calloc(1, sizeof(struct node));
    first = (struct node *)calloc(1, sizeof(struct node));
    second = (struct node *)calloc(1, sizeof(struct node));
    third = (struct node *)calloc(1, sizeof(struct node));
    fourth = (struct node *)calloc(1, sizeof(struct node));
    fifth = (struct node *)calloc(1, sizeof(struct node));
    sixth = (struct node *)calloc(1, sizeof(struct node));
    seventh = (struct node *)calloc(1, sizeof(struct node));
    eighth = (struct node *)calloc(1, sizeof(struct node));
    ninth = (struct node *)calloc(1, sizeof(struct node));

    head->data = 0;
    head->next = first;
 
    first->data = 8;
    first->next = second;
 
    second->data = 7;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 1;
    sixth->next = seventh;

    seventh->data = 3;
    seventh->next = eighth;

    eighth->data = 2;
    eighth->next = ninth;

    ninth->data = 4;
    ninth->next = NULL;

    traverse(head);

    return 0;
}