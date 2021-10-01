#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return (-1);
}
void res(int result, int element)
{
    if (result == (-1))
    {
        cout << "Error 404" << endl;
    }
    else
    {
        cout << "The element " << element << " found on index " << result << endl;
    }
}
int binarysearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(element<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[50] = {1,2,3,4,5,6,7,8,9};
    int element;
    int size = 9;

    cout << "Enter the Element to search: ";
    cin >> element;
    // sort(arr,arr+9);
    int result = binarysearch(arr, 9, element);
    res(result, element);

    return 0;
}