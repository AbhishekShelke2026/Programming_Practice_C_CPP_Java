#include<iostream>
using namespace std;

template <class T>

T Addition(T No1 , T No2)
{
    T Ans;

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