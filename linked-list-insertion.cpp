#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    for (int i = 0; ptr != NULL; i++)
    {
        cout << "Element " << i << " is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
//Case 1
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)calloc(1, sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//Case 2
struct node *insertatindex(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)calloc(1, sizeof(struct node));
    struct node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//Case 3
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)calloc(1, sizeof(struct node));
    struct node *p = head;

    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
//Case 4
struct node *insertatnode(struct node* head,struct node *node, int data)
{
    struct node *ptr = (struct node *)calloc(1, sizeof(struct node));
    struct node *p = head;

    int i = 0;
    while (p->next != node)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = node;
    p->next = ptr;
    return head;
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

    cout << "Before Insertion" << endl;
    traverse(head);
    // head = insertatfirst(head, 11);
    insertatnode(head,third,11);
    cout << "After Insertion" << endl;
    traverse(head);

    return 0;
}