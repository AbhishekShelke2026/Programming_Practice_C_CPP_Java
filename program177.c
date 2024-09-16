#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool CheckOccurance(char *str)   //case in-Sensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'w' )
        {
            return true;
        }

        else 
        {
            return false;
        }
        
        str++;
        
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurance(Arr);

    if(bRet == true)
    {
        printf("w is present \n");
    }
    else
    {
        printf("w is not present\n");
    }

    



    return 0;
}