//1 2 3 4 5 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
//           1          2        3  
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);   //4
    }
    printf("\n");
}

int main()
{
    int iValue;

    printf("Enter frequency.\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}