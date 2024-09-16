#include<stdio.h>

float Addition(float fno1 , float fno2)
{
    float fAns = 0.0;
    fAns = fno1 + fno2;
    return fAns;
}
int main()
{

    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float fResult = 0.0;

    printf("enter first no :\n");
    scanf("%f",&fValue1);

    printf("enter second no ;\n");
    scanf("%f",&fValue2);
     
    fResult = Addition(fValue1 , fValue2);

    printf("Addition is : %f\n",fResult);
    

    return 0;
}
