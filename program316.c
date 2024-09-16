#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 256;    // iyhe 9th bit find karaychi aahe tya mule
    unsigned int iResult = 0;    // 1,2,4,8,16,32,64,128,256  (9th is 256)

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
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is oFF\n");
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