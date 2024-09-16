#include<iostream>
using namespace std;


int  Addition(int iNo)
{
    static int i = 1;
    static int Sum =0;

    if(i <= iNo)
    {
        Sum = Sum + i;
        i++;

        Addition(iNo);
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
