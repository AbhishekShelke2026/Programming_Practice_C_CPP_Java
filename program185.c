#include<stdio.h>
#include<stdbool.h>


void UpdateString(char *str)   
{
    

    while(*str != '\0')
    {
        
       
        str++;
    }
           
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = false;
    

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

   
    UpdateString(Arr);

    printf("Updates String is %s\n",Arr);

    

    return 0;
}