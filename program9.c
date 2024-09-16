#include<stdio.h>
#include<stdbool.h>

// user is only going to ineter only positive input

//Algorithm
/*
        START*
            Accepr one number as No
            Divide that no by 3
            if remainder is 0
            devide the no by 5
            if remainder is 0
            then print no. is divisible by 3 ans 5
            then display the result as even
            otherwise display the result is not divisible by 3 , 5
        STOP*
*/
///////////////////////////////////////////////////////
//
// function name :  ChechDivisible
// Description :    used to check weather no. is divisible by 3 and 5
// Input :          Integer
// Output :         Boolean
// Author :         Abhishek Kiran Shelke
// Date :           16/04/2024
//
///////////////////////////////////////////////////////

bool ChechDivisible(unsigned int iNo)
{
    if (((iNo % 3) == 0 ) && ((iNo % 5) == 0))
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

    bRet = ChechDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n",iValue);
    }

    else
    {
        printf("%d is not divisible by either 3 or5 5\n",iValue);
    }


    return 0;
}

/*

 Logical  Operator

 First        Second       &&         ||
 
 true         true         true       true
 false        false        false      false
 true         false        flase      true
 false        true         false      true

*/