#include<iostream>
using namespace std;

double Addition(double No1 , double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double Value1 = 10.78;
    double Value2 = 11.07;
    double iRet = 0.0;

    iRet = Addition(Value1 , Value2);

    cout<<"Addition is :"<<iRet; 


    return 0;
}