#include<stdio.h>

int main()
{
    unsigned int iNo1 = 0 , iNo2 = 0 , iRet = 0;

    printf("Enter the first Number \n");
    scanf("%u",&iNo1);       // for unsigned  = %u

    printf("Enter the second Number \n");
    scanf("%u",&iNo2);

    iRet = iNo1 | iNo2;

    printf("Result of bitwise | : %u\n",iRet);


    return 0;
}

/*
            |

    op1     op2     result

    1       1           1
    1       0           1
    0       0           0
    0       1           1

            iNo1        11      0 0 0 0 1 0 1 1 
            iNo2        15      0 0 0 0 1 1 1 1
                            ----------------------     = 15
                                0 0 0 0 1 1 1 1 

*/