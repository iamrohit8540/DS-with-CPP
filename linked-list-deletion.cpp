#include <bits/stdc++.h>
using namespace std;

//declaring node structure
struct node
{
    int data;
    struct node *next;
};
//function for node traversal
void traverse(struct node *ptr)
{
    for (int i = 0; ptr != NULL;i++)
    {
        cout << "Element "<<i<<" is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
//Case 1
struct node* deleteatfirst(struct node* head)
{
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//Case 2
struct node* deleteatindex(struct node* head,int index)
{
    struct node* p = head;
    struct node* q = head->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}
//Case 3
struct node* deleteatend(struct node* head)
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    p->next=NULL;
    free(q);
    return head;

}
//Case 4  
struct node* deleteatvalue(struct node* head,int val)
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=val && q->next != NULL)/* We move q->data to the node with given value and
    if the value not found then the loop will stop at last node */
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==val)// this conditional statement is checking wether loop found the value or not 
    {
        p->next=q->next;
        free(q);
    }
    else //if value not found in list
    {
        cout<<"Error 404"<<endl;
    }
    
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

    cout<<"Before deletion..."<<endl;
    traverse(head);
    head=deleteatvalue(head,9);
    cout<<"After deletion..."<<endl;
    traverse(head);

    return 0;
}