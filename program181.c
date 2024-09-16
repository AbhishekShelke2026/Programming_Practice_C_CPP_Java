#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int CheckOccurance(char *str , char ch)   
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if (*str == ch)
        {
            bFlag == true;
            break;
        }
        iCnt++;
        str++;
    }

    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }

    
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = false;
    

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("enter charactor that u want to search\n");
    scanf(" %c", &cValue);

    iRet = CheckOccurance(Arr  , cValue);

    if(iRet != -1)
    {
        printf("letter occours at the position %d\n",iRet);
    }
    else
    {
        printf("their is no such letter\n");
    }

    return 0;
}