/////////////////////////////////////
//
//  Function Name :    CalculateTicket
//  Description :      use to dsiplay ticket prise based on age
//  Input :            Integer
//  Output :           Integer
//  Author :           Abhishek Kiran Shelke
//  Date  :            29/04/2024
//
//////////////////////////////////


//watre park tickets


#include<stdio.h>

int CalculateTicket(int iAge)
{
    if ((iAge >= 0) && (iAge <= 4))
    {
        return 0;
    }

    else if ((iAge > 4) && (iAge <= 10))
    {
        return 900;
    }

    else if ((iAge > 10) && (iAge <= 50))
    {
        return 2000;
    }

    else if (iAge > 50)
    {
        return 500;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Age  :\n");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);

    printf("Your ticket Prise is : %d \n",iRet);


    return 0;
}