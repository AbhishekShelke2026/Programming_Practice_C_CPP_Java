#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Search(int Arr[] , int iSize , int iNo)
{
    int i = 0;
    bool bFlag = false;
    
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]) == iNo)
        {
            bFlag = true;
            break;
        }

        
    }
    return bFlag;
}



int main()
{
    int iCount = 0 , i = 0 , iRet = 0 , iValue = 0;
    int *Brr = NULL;
    bool bRet = 0;

    
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


    bRet = Search (Brr , iCount , iValue);
    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
   

    free(Brr);    


   return 0;
}
