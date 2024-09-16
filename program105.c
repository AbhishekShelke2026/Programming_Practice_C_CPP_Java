/*
$ * *
* $ *
* * $

*/


#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;

    int j = 0;

    if(iRow != iCol)
    {
        printf("no. of rows and no. of columns are not same\n");
        return;
    }

    
//        1       2        3
    for(i = 1; i <= iRow; i++)    //Outer
    {
        //      1         2      3
        for(j = 1; j <= iCol; j++)   //Inner
        {
            if(i >= j)
            {
                printf("#\t");
            }
            else
            {
                printf("@\t");
            }


        }

        printf("\n");

    }

}

int main()
{
    int iValue1 =0 , iValue2 = 0;

    printf("enter the no. of rows : \n");
    scanf("%d",&iValue1);

    printf("enter the no. of columns : \n");
    scanf("%d",&iValue2);


    Display(iValue1 , iValue2);  //Display(3,4)


    return 0;
}