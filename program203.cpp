#include<iostream>
using namespace std;

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }

    }    
        return iCnt:


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the number :"<<endl;
    cin>>iValue;

    iRet = SumFactor(iValue);

    cout<<"Summetion of factor is : "<<iRet<<endl;


    return 0;
}