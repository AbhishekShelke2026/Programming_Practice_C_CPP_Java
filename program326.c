#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000c00; 
    unsigned int iResult = 0;    

    printf("Enter No : \n");
    scanf("%u",&iNo);

    iResult = iNo  &  iMask;

    if(iResult == iMask)
    {
        printf("6th And 9th bit is ON\n");
    }

    else
    {
        printf("6th and 9th  bit is OFF\n");
    }



    return 0;
}





/*

// 0000     0000        0000    0000    0000    1100   0000     0000

// 0        0           0       0       0       c       0       0

0x00000c00

*/