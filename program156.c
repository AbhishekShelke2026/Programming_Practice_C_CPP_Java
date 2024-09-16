#include<stdio.h>
#include<stdbool.h>

void CheckDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("not a digit \n");
    }
}

int main()
{
    char cValue ;
    


    printf("Enter One Charactor\n");
    scanf("%c",&cValue);

    CheckDigit(cValue);

   

   
    return 0;
}