#include<stdio.h>
#include<string.h>


int CountVovel(char *str)   //case Sensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
           iCnt++; 
        }
        str++;
        
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVovel(Arr);

    printf("Number of Vovels  Are  %d \n",iRet);



    return 0;
}