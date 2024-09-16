/*
    0 to 35   fail                                  (35 exclesive)
    35 to 50  pass class                            (50 exclesive)
    50 to 60  second class                          (60 exclesive)
    60 to 75  first class                           (75 exclesive)
    75 to 100 first class with distuinction         (100 exclesive)
    
*/


#include<stdio.h>

//user define macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5


int DisplayResult(float fMarks )
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    //filter
    {
        return RET_INVALID;
    }
   

    if ((fMarks >= 0.0f )&& (fMarks < 35.0f))
    {
        return RET_FAIL;
    }

    else if ((fMarks >=35.0f) && (fMarks < 50.0f))
    {
        return RET_PASSCLASS;
    }

    else if((fMarks >=50.0f) && (fMarks < 60.0f))
    {
        return RET_SECONDCLASS;
    }

    else if((fMarks >=60.0f) && (fMarks < 75.0f ))
    {
        return RET_FIRSTCLASS;
    }

    else if((fMarks >= 75.0f) && (fMarks < 100.0f))
    {
        return RET_DISTINCTION;
    }
    
}

int main()
{ 
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage :");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);

    if(iRet == RET_INVALID)
    {
       printf("input is in valid\n");
    }

    else if(iRet == RET_FAIL)
    {
       printf("student is fail in exam\n"); 
    }

    else if(iRet == RET_PASSCLASS)
    {
        printf("student is having pass class in exam\n");
    }

    else if(iRet == RET_SECONDCLASS)
    {
        printf("student is having second class in exam\n");
    }

    else if(iRet == RET_FIRSTCLASS)
    {
        printf("student is having first class in exam\n");
    }

    else if(iRet == RET_DISTINCTION)
    {
        printf("student is having distinction class in exam\n");
    }
    

    

    return 0;
}