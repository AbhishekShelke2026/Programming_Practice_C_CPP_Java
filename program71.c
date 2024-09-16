// Input : 5
// Outut : 1 *  2  *  3  *  4  *  5  *

// 2 printf

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

//          1           2          3
    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d \t",iCnt);      //4
        printf("*\t");            //4
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter No :\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}