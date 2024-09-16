//accept no. and check digits > 5

//count digit

#include<stdio.h>

int CountDigit(int iNo)
{
    
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)    //filter
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 5 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("no. of digits greater than 5 are : %d\n",iRet);



    return 0;
}