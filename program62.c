//accept no. and check summetion of digits

//count digit

#include<stdio.h>

int SumDigit(int iNo)
{

    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)    //filter
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;

        iNo = iNo / 10;

    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Sun of digits are : %d\n",iRet);



    return 0;
}