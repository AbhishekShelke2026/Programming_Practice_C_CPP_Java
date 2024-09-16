//take input as a number and display how many numbers present in the factor of that number


#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            iCount++;
        }
    
    }
    return iCount;
}

int main()
{
    int iValue = 0;
     int iRet = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);
    printf("numbers of factors are : %d\n",iRet);
    
    return 0;
}