#include<stdio.h>

///////////////////////////////////////
//
// function name:   Addition
// Description:      it is use to perform addition of two float
// input:        float float
// output:            float
// Author:            Abhishek Kiran Shelke
// Date:             15/04/2024
//
//////////////////////////////////////
float Addition(float fno1 , float fno2)
{
    float fAns = 0.0;
    fAns = fno1 + fno2;
    return fAns;
}

////////////////////////////////////
//
//Function NAme : main
//Description : it is entry point function
//
////////////////////////////////////
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