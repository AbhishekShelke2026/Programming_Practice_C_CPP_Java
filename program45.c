//Accept no from user and check prime or not without using flag


#include<stdio.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)  //updator
    {
        iNo = -iNo;    
    }
    
    //      1            2               3
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt)==0)  //4
        {
            break;
        } 
    }

    if (iCnt > (iNo / 2))
    {
        return true;
    }
    else 
    {
        return false;
    }

    
}

int main()
{
    int iValue = 0;
    bool bRet = true;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }


    return 0;
}