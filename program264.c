#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        (*str) = (*str) + 32;

        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("updated string is = %s",Arr);

    return 0;
}