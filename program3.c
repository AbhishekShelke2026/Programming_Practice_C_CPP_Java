//Accept 2 no. froms user and perform its addition

#include<stdio.h>
int main()
{
    //int i, j, k;

    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("enter first no :\n");
    scanf("%d",&iValue1);

    printf("enter second no ;\n");
    scanf("%d",&iValue2);
    
    iResult = iValue1 + iValue2;

    printf("Addition is : %d\n",iResult);
    return 0;
}