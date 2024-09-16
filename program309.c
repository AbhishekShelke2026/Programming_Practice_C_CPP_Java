#include<stdio.h>

int Count1(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }

    return iCount;


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