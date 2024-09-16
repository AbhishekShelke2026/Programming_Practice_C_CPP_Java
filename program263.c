#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("entered string is = %s",Arr);

    return 0;
}