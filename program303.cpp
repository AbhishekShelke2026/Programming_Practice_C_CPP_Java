#include<iostream>
using namespace std;


int main()
{
    int *Arr = NULL;
    int iCount =0;
    int i = 0;

    cout<<"Enter no. of elements" <<endl;
    cin>>iCount;

    Arr = new int [iCount];

    cout<<"Emnter the element "<<endl;
    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    cout<<"entered numbers are"<<endl;
    for(i = 0; i < iCount; i++)
    {
        cout<<Arr[i]<<endl;
    }

    delete []Arr;

    return 0;
}
