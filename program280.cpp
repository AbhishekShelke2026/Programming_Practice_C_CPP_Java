#include<iostream>
using namespace std;

//recurssion

void Display(int iNo)
{
    
    if(iNo >= 1)
    {
        cout<<iNo<<endl;
        iNo--;

        Display(iNo);
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
