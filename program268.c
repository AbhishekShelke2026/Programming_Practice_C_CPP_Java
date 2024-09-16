#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) - 32;
        }
        else if ((*str >= 'A') && (*str <= 'z'))
        {
            (*str) = (*str) + 32;
        } 
        str++;
    }    
}

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("updated string is = %s",Arr);

    return 0;
}