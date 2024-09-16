#include<stdio.h>

int Count1(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;

        iSum = iSum + iDigit;

        iNo = iNo / 2;
    }

    return iSum;


}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    iRet = Count1(ivalue);

    printf("Number of 1 are = %d \n",iRet);


    return 0;
}