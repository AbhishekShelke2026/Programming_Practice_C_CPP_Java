#include<stdio.h>
#include<stdbool.h>

void CheckSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("Small letter\n");
    }
    else
    {
        printf("not a Small letter\n");
    }
}

int main()
{
    char cValue ;
    


    printf("Enter One Charactor\n");
    scanf("%c",&cValue);

    CheckSmall(cValue);

   

   
    return 0;
}