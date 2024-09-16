#include<stdio.h>
#include<stdlib.h>


______ _______(int Arr[] , int iSize)
{
    //logic
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


    iRet = _______ (Brr , iCount);
    printf("Add is : %d\n", iRet);


    free(Brr);    


   return 0;
}



/*

step1 = Accept no element from user

step2 = Allocate dynamic memory for that no of element

srep3 = accept the value from usre and store into the memory

step4 = pass the address of memory to function (Any)

step5 = After using that memory free it explicitely

*/