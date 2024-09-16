#include<stdio.h>
#include<stdlib.h>


int Search(int Arr[] , int iSize , int iNo)
{
    int i = 0;
    int iFrequency = 0;
    
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]) == iNo)
        {
            iFrequency++;
        }

        
    }
    return iFrequency;
}



int main()
{
    int iCount = 0 , i = 0 , iRet = 0 , iValue = 0;
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

    printf("Enter The element that u want to search\n");
    scanf("%d",&iValue);

    iRet = Search (Brr , iCount , iValue);
    printf("Frequency of that no  is : %d\n",iRet);
   

    free(Brr);    


   return 0;
}
