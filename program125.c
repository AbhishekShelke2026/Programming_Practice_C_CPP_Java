#include<stdio.h>
#include<stdlib.h>


void DisplayEven(int Arr[] , int iSize)
{
    int i = 0;
    
    printf("Even element are\n");
    
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2)==0)
        {
            printf("%d\n",Arr[i]);
        }

        
    }
}



int main()
{
    int iCount = 0 , i = 0 , iRet = 0;
    int *Brr = NULL;

    
    printf("Enter No of Element That U Want :\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof (int));

    printf("Enter The Element :\n");

    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered Elements Are :\n");

    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }


    DisplayEven (Brr , iCount);
    printf("Add is : %d\n", iRet);


    free(Brr);    


   return 0;
}
