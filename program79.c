// input : 5
// output :   1 * 1  2 * 2  3 * 3


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

//          1           2          3
    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t *\t %d\t",iCnt,iCnt,iCnt);     //4
        
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