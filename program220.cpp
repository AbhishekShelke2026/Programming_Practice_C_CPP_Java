#include<iostream>
using namespace std;

int Average(int Arr[] , int iSize)
{
    int i = 0 , iSum = 0;
    float fAns = 0.0f;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    fAns = (float)iSum  /  (float)iSize;

    return ();
}

int main()
{
    int iLength = 0 , i = 0;
    float fRet = 0;

    int *ptr = NULL;

    cout<<"Enter No of element that u want to store:"<<endl;
    cin>>iLength;

    ptr = new int [iLength];  

    cout<<"Enter the element :"<<endl;

    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];

    }

    fRet = Average(ptr , iLength);

    cout<<"Average is :"<<fRet<<endl;

    delete []ptr; 

    return 0;
}