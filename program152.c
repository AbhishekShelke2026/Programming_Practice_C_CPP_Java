#include<stdio.h>
#include<stdbool.h>

bool CheckCaptial(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue ;
    bool bREt = false;


    printf("Enter One Charactor\n");
    scanf("%c",&cValue);

    bREt = CheckCaptial(cValue);

    if(bREt == true)
    {
        printf("it is a capital letter\n");
    }

    else
    {
        printf("it is not a captial letter\n");
    }

   
    return 0;
}