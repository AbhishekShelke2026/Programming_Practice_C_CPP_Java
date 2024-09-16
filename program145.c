#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[] , int iSize)
{
    int i = 0;
    
    
    for(i = 0; i < iSize; i++)
    {
       Arr[i] = Arr[i] * 2;
    }



}

int main()
{
    int iCount = 0 , i = 0;
    int *Brr = NULL;

    printf("Enter the Number that u want to enter :\n ");  //1
    scanf("%d",&iCount);

    Brr = (int *) malloc (iCount * sizeof (int));   //2

    printf("Enter THe Element :\n");    //3

    for (i = 0; i< iCount; i++)
    {
        scanf("%d",&Brr[i]);      //4
    }

    Updator(Brr , iCount);
    
    printf("Data After Updation is \n");

    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);   
    }

    free(Brr);     //5

    return 0;
}