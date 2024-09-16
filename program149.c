#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[] , int iSize)
{
    int iStart = 0 , iEnd = 0 , temp = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
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

    Reverse(Brr , iCount);

    printf("Element After Reverse : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    

    free(Brr);     //5

    return 0;
}