#include<bits/stdc++.h>
using namespace std;

void displayarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Element "<<i<<" - "<<arr[i]<<endl;
    }
    
}
void deletearray(int arr[],int index,int size)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[50]={5,7,9,8,3,78,45,98,12,34,90,56,543};
    int index=9;
    
    displayarray(arr,13);
    deletearray(arr,index,13);
    cout<<endl;
    displayarray(arr,12);

    return 0;
}