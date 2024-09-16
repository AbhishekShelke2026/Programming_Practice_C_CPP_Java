#include<stdio.h>

void Swap(int *p , inr *q)
{
    int temp = 0;

    temp = *p

    *p = *q

    *q = temp;
}

int main()
{
    int A = 0 , B = 0;

    printf("Enter 1st No\n")
    scanf("%d",&A);

    printf("Enter 2nd No\n")
    scanf("%d",&B);

    Swap(&A , &B);

    printf("Value of A after Swapping : %d\n",A);

    printf("Value of B after Swapping : %d\n",B);


    return 0;
}