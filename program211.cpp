#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
    int iSumE = 0;
    int iSumO = 0;
    int iDigit = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumE = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSumE - iSumO;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the no :"<<endl;
    cin>>iValue;

    iRet = SumDifference(iValue);

    cout<<"Difference is :"<<iRet<<endl;


    return 0;
}