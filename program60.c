//count digit   show and odd numbers

#include<stdio.h>

int DisplayOddDigit(int iNo)
{
    
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)    //filter
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;

        if(iDigit % 2 != 0)
        {
            printf("%d\n",iDigit);
        }

    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    iRet = DisplayOddDigit(iValue);

    printf("no. of odd digits are %d\n",iRet);


    return 0;
}