#include<stdio.h>

//void Display(int *ptr , int iSize)

int Addition(int ptr[] , int iSize)
{
    int i = 0;
    int iSum = 0;

    //     1      2         3
    for(i = 0; i < iSize;  i++ )
    {
        
        printf("%d\n", ptr[i]);  // 4

        //printf("%d\n", *(ptr  + i));

        iSum = ptr[i] + iSum;
        
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iRet = 0 , i = 0;
    

    printf("Enter The Elements :\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    iRet = Addition(Arr,5);   //Dsaplay(100);

    printf("Addiotion id : %d\n",iRet);
     
    
   
    return 0;

}