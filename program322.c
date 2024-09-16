#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000008;   // 8 cha hexadecimal
    unsigned int iResult = 0;

    printf("Enter No : \n");
    scanf("%u",&iNo);

    iResult = iNo  &  iMask;

    if(iResult == iMask)
    {
        printf("4th bit is ON\n");
    }

    else
    {
        printf("4th bit is OFF\n");
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