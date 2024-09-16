#include<stdio.h>
#include<stdlib.h>


int Addition(int Arr[] , int iSize)
{
    int i = 0;
    int iSum = 0;

    //     1      2         3
    for(i = 0; i < iSize;  i++ )
    {
        
        printf("%d\n", Arr[i]);  // 4

        //printf("%d\n", *(ptr  + i));

        iSum = Arr[i] + iSum;
        
    }
    return iSum;
}



int main()
{
    int iCount = 0 , i = 0 , iRet = 0;
    int *Brr = NULL;

    //step 1
    printf("Enter No of Element That U Want :\n");
    scanf("%d",&iCount);

    //step 2 
    Brr = (int *)malloc(iCount * sizeof (int));

    //step 3
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


    // step 4

    iRet = Addition (Brr , iCount);
    printf("Add is : %d\n", iRet);

    //step 5
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