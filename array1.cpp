#include <bits/stdc++.h>
using namespace std;

class myArray
{
    public:
    int total_size;
    int used_size;
    int *ptr;
    void createArray(myArray *a, int Tsize, int Usize)
    {
        a->total_size = Tsize;
        a->used_size = Usize;
        a->ptr = (int*)calloc(Tsize,4);
    }
    void setval(myArray* a)
    {
        for (int i = 0; i < a->used_size; i++)
        {
            cout<<"Enter the element ";
            scanf("%d",&ptr[i]);
        }
    }
    void show(myArray* a)
    {
        for (int i = 0; i < a->used_size; i++)
        {
            cout<<"Element is "<<ptr[i]<<endl;
        }
    }
};
int main()
{
    myArray marks;
    marks.createArray(&marks,10,2);
    // cout<<"Running setval ....."<<endl;
    // marks.setval(&marks);
    cout<<"Running show ....."<<endl;
    marks.show(&marks);
    cout<<marks.used_size<<endl;
    cout<<marks.total_size<<endl;

    return 0;
}