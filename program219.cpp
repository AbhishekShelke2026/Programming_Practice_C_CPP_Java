#include<iostream>
using namespace std;

int Average(int Arr[] , int iSize)
{
    int i = 0 , iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return ((float)iSum  /  (float)iSize);
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