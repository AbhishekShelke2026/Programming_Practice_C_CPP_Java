#include<iostream>
using namespace std;


void Display(int iNo)
{
    int i = iNo;

    while(iNo >= 1)
    {
        cout<<i<<endl;
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout<<"enter number"<<endl;
    cin>>iValue;


    Display(iValue);

    cout<<"End of Application"<<endl;

    return 0;
}
