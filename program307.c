#include<stdio.h>

int main()
{
    int no = 0;  

    printf("Enter no :\n");
    scanf("%d",&no);

    printf("Decimal : %d\n",no);
    printf("Octal : %o\n", no);
    printf("Hexadecimal : %x\n",no);


    return 0;
}


/*------------------------
-----------------
Numbering System
----------------
---------------------------

Name            Base            Range
Values

----------------------------
-----------------

Decimal         10              0 to 9                  0 1 2 3 4 5 6 7 8 9
6  7  8  9 


octal
6  7             8              0 to 7                  0 1 2 3 4 5 6 7


Hexadecimal      16             0 to 15                 0 1 2 3 4 5 6 7 8  9
                                                        a b c d e f


Binary           2              0 to 1                  0 1

-----------------------------
----------------                                                       

*/