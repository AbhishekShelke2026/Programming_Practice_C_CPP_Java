//accept no. and check summetion of even digits

//count digit

#include<stdio.h>

int SumEvenDigit(int iNo)
{

    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)    //filter
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
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

    iRet = SumEvenDigit(iValue);

    printf("Sun of even digits are : %d\n",iRet);



    return 0;
}