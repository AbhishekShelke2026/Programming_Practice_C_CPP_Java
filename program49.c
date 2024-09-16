
//take input and display factorial of given number



#include<stdio.h>

unsigned long int factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

//         1           2       3
    iCnt =1;
    while( iCnt <= iNo)
    {
        
        iFact = iFact * iCnt;  //4
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = factorial (iValue);

    printf("factorial is : %lu\n",iRet);

    return 0;
}