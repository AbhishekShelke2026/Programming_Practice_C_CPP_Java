//print "Jay Hanuman" any time that user wants to print using While loop 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    iCnt = 1;
    while ( iCnt <= iNo )
    {
        printf("Jay Hanuman.......\n");
        iCnt++;
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
