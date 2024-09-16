//print "Jay Hanuman" any time that user wants to print using for loop 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Hanuman.......\n");
    }
}

int main()
{
    int iValue =0;

    printf("enter no of times you want to diaplsy Jay Hanuman on screen :");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}
