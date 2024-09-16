
//take input and display factorial of given number



#include<stdio.h>

long int factorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;

//          1           2       3
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        
        iFact = iFact * iCnt;  //4

    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = factorial (iValue);

    printf("factorial is : %ld\n",iRet);

    return 0;
}