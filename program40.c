//take one number from user and check weather the no. is perfect or not


/*  Accept number as No
    Search all its factors
    perform addition of all factors
    if addition is same as number
    then display number as perfect
    otherwise display as no it is not perfect
*/

//filter used at line 23 to 28

#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)    //filter
    {
        printf("please inter positive number\n");

        return false;
    }
    

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
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
    int iValue = 0;
    bool bRet = true;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }


    return 0;
}