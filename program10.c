//check weather if the number is in between 30 and 50

/*

  START
        Accept one no as no
        if the no is greater than 30 and if is less than 50
        then display the message as number is in range
        otherwise
        display the message as number is not in the range
  STOP

  
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
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
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    bRet = CheckRange(iValue1);

    if(bRet == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}