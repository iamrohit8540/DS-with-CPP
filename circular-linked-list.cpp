#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void traverse(node* head)
{
    int i=0;
    node* ptr = head;
    do
    {
        cout << "Element "<<i<<" is: " << ptr->data << endl;
        ptr = ptr->next;
    }
    while (ptr!=head);
}
int main()
{
    node* head;
    node* first;
    node* second;
    node* third;

    head = (node*)calloc(1,sizeof(node));
    first = (node*)calloc(1,sizeof(node));
    second = (node*)calloc(1,sizeof(node));
    third = (node*)calloc(1,sizeof(node));

    head->data=0;
    head->next=first;
     
    first->data=2;
    first->next=second;
     
    second->data=3;
    second->next=third;
     
    third->data=1;
    third->next=head;

    traverse(head); 



    return 0;
}