// input : 5
// output : 5  4  3  2  1  0


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

//          1           2          3
    for (iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);     //4
       
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