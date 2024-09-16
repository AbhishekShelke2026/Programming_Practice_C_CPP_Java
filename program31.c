//check weather no is divisible by 4 or not



#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNo)
{
    if (iNo % 4 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}


int main ()
{
    int iValue = 0;
    bool bRet = true;

    printf("Enter The number :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 4 \n",iValue);
    }
    else
    {
        printf("%d is not Divisible by 4\n",iValue);
    }

    return 0;
}