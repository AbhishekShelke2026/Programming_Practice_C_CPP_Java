#include<iostream>
using namespace std;


int SumDigits (int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum  + iDigit;

        iNo = iNo / 10;

        SumDigits(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter number"<<endl;
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"Sum of digits are "<<iRet<<endl;


    return 0;
}
