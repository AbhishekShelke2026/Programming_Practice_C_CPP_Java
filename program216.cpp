#include<iostream>
using namespace std;

int main()
{
    int iLength = 0 , i = 0;
    int *ptr = NULL;

    cout<<"Enter No of element that u want to store:"<<endl;
    cin>>iLength;

    ptr = new int [iLength];     // for C++

    //ptr = (int *)malloc (sizeof(int) * iLength);    //for C

    // Logic

    delete []ptr;   //for c++

    // free(ptr);    //for c

    return 0;
}