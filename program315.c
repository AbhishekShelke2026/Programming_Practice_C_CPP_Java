#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 8;   //for 4th bit == 1 , 2 , 4 , 8
    unsigned int iResult = 0;      //ithe  4 no la 8 ahe tya mule 4th bit 
                                   //find karayla 8 lihile
    iResult = iNo  & iMask;

    if(iResult == iMask)
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
    bool bRet = 0;

    printf("Enter No : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is oFF\n");
    }



    return 0;
}







/*
--------------------------
op1     op2     &       |       ^

1       1       1       1       0
1       0       0       1       1
0       1       0       1       1
0       0       0       0       0

*/