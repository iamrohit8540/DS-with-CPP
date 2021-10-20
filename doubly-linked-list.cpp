#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data = 0;
    node *next;
    node *prev;
};
void traverse(node *head)
{
    node *ptr = head;
    for (int i = 0; ptr != NULL; i++)
    {
        cout << "Element " << i << " is " << ptr->data << "." << endl;
        ptr = ptr->next;
    }
    cout << endl;
}
// Case 1(INSERTION)
node *inserthead(node *head, int val)
{
    node *ptr = (node *)calloc(1, sizeof(node));
    node *p = head;
    ptr->data = val;
    ptr->prev = NULL;
    ptr->next = p;

    p->prev = ptr;
    head = ptr;
    return head;
}
// Case 2(INSERTION)
node *insertend(node *head, int val)
{
    node *ptr = (node *)calloc(1, sizeof(node));
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;

    ptr->data = val;
    ptr->prev = p;
    ptr->next = NULL;

    return head;
}
 
// Case 3(INSERTION)
node *insertatindex(node *head,int index,int val)
{
    node *ptr = (node *)calloc(1, sizeof(node));
    node *p = head;
    node *q = head->next;

    int i=0;
    while (i!=index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = ptr;

    ptr->data = val;
    ptr->prev = p;
    ptr->next = q;

    q->prev=ptr;

    return head;
}
 
// Case 4(INSERTION)
void insertatnode(node* Node,int val)
{
    node *ptr = (node *)calloc(1, sizeof(node));
    node *p = Node;
    node *q = Node->prev;

    ptr->data= val;
    ptr->prev=q;
    ptr->next=p;

    q->next=ptr;
    p->prev=ptr;    
}
 
int main()
{
    node *head;
    node *first;
    node *second;
    node *third;

    head = (node *)calloc(1, sizeof(node));
    first = (node *)calloc(1, sizeof(node));
    second = (node *)calloc(1, sizeof(node));
    third = (node *)calloc(1, sizeof(node));

    head->data = 0;
    head->next = first;
    head->prev = NULL;

    first->data = 3;
    first->next = second;
    first->prev = head;

    second->data = 1;
    second->next = third;
    second->prev = first;

    third->data = 2;
    third->next = NULL;
    third->prev = second;

    cout << "Before Operation..." << endl;
    traverse(head);

    // head=inserthead(head,5);
    // head = insertend(head, 5);
    // head = insertatindex(head,2,4);
    insertatnode(third,4);

    cout << "After Operation..." << endl;
    traverse(head);

    return 0;
}