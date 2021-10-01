#include <bits/stdc++.h>
using namespace std;

void displayarray(int arr[], int size) //traversal
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element is " << arr[i] << endl;
    }
}
int insertion(int arr[], int size, int index, int capacity, int element) //insertion
{
    if (size >= capacity)
    {
        return 0;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}
int main()
{
    int size = 5, index, capacity = 50, element, result;
    int arr[50] = {54, 56, 98, 34, 57};

    cout << "Enter the index: ";
    cin >> index;
    cout << "Enter the element: ";
    cin >> element;
    // displayarray(arr, size);
    cout << endl;
    result = insertion(arr, size, index, capacity, element);
    size++;
    if (result == 0)
    {
        cout << "Insertion failed";
    }
    else
    {
        cout << "Insertion successful" << endl;
        displayarray(arr, size);
    }

    return 0;
}
