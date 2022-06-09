#include <bits/stdc++.h>
using namespace std;

int t;
class Stack
{
public:
    int size;
    int top;
    int *arr;

    Stack()
    {
        cout << "Enter the size of the dynamically allocating array: ";
        cin >> size;
        arr = (int *)calloc(size, sizeof(int));
        top = -1;
    }
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow..." << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is already EMPTY." << endl;
            return;
        }
        else
        {
            arr[top] = 0;
            top--;
        }
    }
};
void traverseinstack(Stack s)
{
    if (s.top == -1)
    {
        cout << "Stack is empty..." << endl;
        return;
    }
    else
    {
        for (int i = 0; i <= (s.top); i++)
        {
            cout << s.arr[i] << endl;
        }
    }
}
int peek(Stack sp,int p)
{
    if(sp.top-p+1<0)
    {
        cout<<"Not a valid position "<<endl;
        return -1;
    }
    else
    {
        return sp.arr[sp.top-p+1];
    }
    
}
int peekup(Stack sp,int p)
{
    p=sp.top;
    if(t<0)
    {
        cout<<"Not a valid position "<<endl;
        return -1;
    }
    else
    {
        return sp.arr[t];
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    Stack s;

    s.push(1);
    s.push(3);
    s.push(4);
    s.push(2);

    // s.push(0);
    cout << "Before operation " << endl;
    cout << "================" << endl;
    // traverseinstack(s);
    // s.pop();
    cout << "After opeation " << endl;
    cout << "==============" << endl;
    // traverseinstack(s);
    // cout<<peek(s,2);
    // for (int i = 1; i <= s.size; i++)
    // {
    //     cout<<"The element at position "<<i<<" is "<<peek(s,i)<<endl;
    // }
    cout<<s.arr[3];
    

    return 0;
}
