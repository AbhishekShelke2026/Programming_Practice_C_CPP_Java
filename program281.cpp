#include<iostream>
using namespace std;


int  Addition(int iNo)
{
    int i = 0;
    int Sum =0;

    while(i >= iNo)
    {
        iNo++;
        Sum = i + Sum;
    }
    return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter number"<<endl;
    cin>>iValue;


    iRet = Addition(iValue);

    cout<<"Addition is="<<iRet<<endl;

    return 0;
}
