#include<stdio.h>

float Addition(
                float fno1 ,   //first input
                float fno2     //second input
            )
{
    float fAns = 0.0;          //variable to store result
    fAns = fno1 + fno2;
    return fAns;
}

int main()
{

    float fValue1 = 0.0;       //variable to store first input
    float fValue2 = 0.0;       //variable to store second input
    float fResult = 0.0;       //variablr to store return value

    printf("enter first no :\n");
    scanf("%f",&fValue1);

    printf("enter second no ;\n");
    scanf("%f",&fValue2);
     
    fResult = Addition(fValue1 , fValue2);

    printf("Addition is : %f\n",fResult);
    

    return 0;
}