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
        i++;
    }
    while (ptr!=head); //we use do while loop to at least run the loop for one time
}
//Insertion Case 1
node* insertatfirst(node* head,int val)
{
    node* ptr;
    ptr=(node*)calloc(1,sizeof(node));
    node* p=head; //new pointer to copy head
    ptr->data=val;

    while(p->next!=head)
    {
        p = p->next; //p will point to the last element after loop ends
    }
    p->next=ptr;
    ptr->next=head;
    head = ptr; //we will update the head
    
    return head;
}
//Insertion Case 2
node* insertatindex(node* head,int val,int index)
{
    node* ptr;
    ptr=(node*)calloc(1,sizeof(node));
    node* p=head;
    ptr->data=val;
    int i=0;

    while(i!=index-1)
    {
        p = p->next;
        i++;
    }

    ptr->next=p->next;
    p->next=ptr;   
    
    return head;
}
//Insertion Case 3
node* insertatend(node* head,int val)
{
    node* ptr;
    ptr=(node*)calloc(1,sizeof(node));
    node* p=head;
    ptr->data=val;

    while(p->next!=head)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next=head;
    // head = ptr; //here we will not update the head
    
    return head;
}
//Insertion Case 4
void insertatnode(node* Node,int val)
{
    node* ptr;
    ptr=(node*)calloc(1,sizeof(node));
    ptr->data=val;
    
    ptr->next=Node->next;
    Node->next=ptr;
    // head = ptr; //here we will not update the head    
}
//Deletion Case 1
node* deletehead(node* head)
{
    node* ptr=head;
    node* p=head;

    while (p->next!=head)
    {
        p=p->next;
    }

    p->next=ptr->next;
    head=p->next;
    free(ptr);
    
    // cout<<ptr->next->data<<endl;
    // cout<<head->data<<endl;
    return head;

}
//Deletion Case 2
node* deleteend(node* head)
{
    node* p=head;
    node* q=head->next;

    while (q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);

    
    // head=p->next;
    
    
    // cout<<ptr->next->data<<endl;
    // cout<<head->data<<endl;
    return head;

}
//Deletion Case 3
node* deleteatindex(node* head,int index)
{
    node* p=head;
    node* q=head->next;
    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q); 
 
    
    // head=p->next;
    
    
    // cout<<ptr->next->data<<endl;
    // cout<<head->data<<endl;
    return head;

}
//Deletion Case 4
node* deletevalue(node* head,int value)
{
    node* p=head;
    node* q=head->next;
    // int i=0;

    while (q->data!=value)
    {
        p=p->next;
        q=q->next;
        // i++;
    }
    p->next=q->next;
    free(q); 
 
    
    // head=p->next;
    
    
    // cout<<ptr->next->data<<endl;
    // cout<<head->data<<endl;
    return head;

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

    cout<<"Before Operation: "<<endl;
    traverse(head);
    // head = insertatfirst(head,4);
    // head = insertatend(head,4);
    // head = insertatindex(head,4,3);
    // insertatend(third,4);
    // head=deleteatindex(head,1);
    head=deletevalue(head,3);
    cout<<"After Operation: "<<endl;
    traverse(head);
    // cout<<head->data<<endl;
    // cout<<first->data<<endl;
    // cout<<second->data<<endl;
    // cout<<third->data<<endl;

    return 0;
}