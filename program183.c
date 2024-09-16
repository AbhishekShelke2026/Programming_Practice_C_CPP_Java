#include<stdio.h>
#include<stdbool.h>


int CheckOccurance(char *str , char ch)   
{
    int iCnt = 1 , iPos = -1;
    

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        
        }
        iCnt++;
        str++;
 
    }
    return iPos;

        
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
        printf("Last occurance of the letter is %d\n",iRet);
    }
    else
    {
        printf("their is no such letter\n",iRet);
    }

    return 0;
}