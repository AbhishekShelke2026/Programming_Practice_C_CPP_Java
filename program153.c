#include<stdio.h>
#include<stdbool.h>

void CheckCaptial(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("capital letter\n");
    }
    else
    {
        printf("not a capital letter\n");
    }
}

int main()
{
    char cValue ;
    


    printf("Enter One Charactor\n");
    scanf("%c",&cValue);

    CheckCaptial(cValue);

   

   
    return 0;
}