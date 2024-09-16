#//take input as a number and displat the factors of that number


#include<stdio.h>

// Tie Complexity O(N)

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("factors of %d are : \n",iNo);

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number  :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;
}