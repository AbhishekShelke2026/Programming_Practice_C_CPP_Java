#include<stdio.h>
#include<stdbool.h>

// user is only going to ineter only positive input

//Algorithm
/*
        START*
            Accepr one number as No
            Divide that no by 2
            if remainder is 0
            then display the result as even
            otherwise display the result as odd number
        STOP*
*/
///////////////////////////////////////////////////////
//
// function name :  chechEvenOdd
// Description :    used to check weather no. is even or odd
// Input :          Integer
// Output :         Boolean
// Author :         Abhishek Kiran Shelke
// Date :           16/05/2024
//
///////////////////////////////////////////////////////

bool checkEvenOdd(unsigned int iNo)
{
    if ((iNo % 2) == 0)
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

    bRet = checkEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is even number\n",iValue);
    }

    else
    {
        printf("%d is odd number\n",iValue);
    }


    return 0;
}