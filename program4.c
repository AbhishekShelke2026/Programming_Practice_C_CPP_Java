//Accept 2 no. froms user and perform its addition

#include<stdio.h>
int main()
{
    //int i, j, k;

    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float fResult = 0.0;

    printf("enter first no :\n");
    scanf("%f",&fValue1);

    printf("enter second no ;\n");
    scanf("%f",&fValue2);
    
    fResult = fValue1 + fValue2;

    printf("Addition is : %f\n",fResult);
    return 0;
}