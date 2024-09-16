#include<stdio.h>
#include<stdlib.h>


int Divisible(int Arr[] , int iSize)
{
    int i = 0;
    int iFrequency = 0;
    
    
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 5 )==0) && ((Arr[i] % 3 )==0)
        {
            iFrequency++;
        }

        
    }
    return iFrequency;
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


    Divisible (Brr , iCount);
    printf("no of  element are divisible by 3 and 5 Are %d\n",iRet);
   

    free(Brr);    


   return 0;
}
