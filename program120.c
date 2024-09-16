#include<stdio.h>

//void Display(int *ptr , int iSize)

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
    int Brr[5];
    int iRet = 0 , i = 0;
    

    printf("Enter The Elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Addition(Brr,5);   //Dsaplay(100);

    printf("Addiotion id : %d\n",iRet);
     
    
   
    return 0;

}