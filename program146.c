#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[] , int iSize)
{
    int i = 0;
    
    printf("Element in Reverse order is :\n");
    
    for(i = iSize - 1;  i >= 0;  i--)
    {
        
        printf("%d\n",Arr[i]);
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
    

    for(i = 0; i < iCount; i++)
    {
       
    }

    free(Brr);     //5

    return 0;
}