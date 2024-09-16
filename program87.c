// input : 5
// output : A  B  C  D  E


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

//          1           2          3
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t ",ch);
        ch++;
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