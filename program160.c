#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter Ypur full name\n");
    scanf("%[^'\n']s",Arr);

    printf("HELLO : %s\n",Arr);
   
    return 0;
}