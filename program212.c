#include<stdio.h>

int Power (int iNo1 , int iNo2)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;

    }

    return iMult;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    printf("Enter first no. : \n");
    scanf("%d",&iValue1);

    printf("Enter first no. : \n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1 , iValue2);

    printf("Answee is : %d\n",iRet);



    return 0;
}