#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool CheckOccurance(char *str , char ch)   //case in-Sensitive
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;

}

int main()
{
    char Arr[100];
    bool bRet = false;
    char cValue = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("enter charactor that u want to search\n");
    scanf("%c",&cValue);

    bRet = CheckOccurance(Arr  , cValue);

    if(bRet == true)
    {
        printf("charactor is present \n");
    }
    else
    {
        printf("charactor is not present\n");
    }

    



    return 0;
}