//accept no. and reverse that number 


#include<stdio.h>

int Reverse(int iNo)
{

    int iDigit = 0;
    int iRev = 0;

    if (iNo < 0)    //filter
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        iRev = (iRev * 10) + iDigit; 

        iNo = iNo / 10;

    }
    return iRev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("reverse digit is  : %d\n",iRet);


    return 0;
}