#include<iostream>
using namespace std;

//Apporoach 3  = using recurssion

void Display(int iNo)
{
    static int i = 1;  

    if(i <= iNo)
    {
        cout<<"*"<<endl;
        i++;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"enter number"<<endl;
    cin>>iValue;


    Display(iValue);

    cout<<"End of Application"<<endl;

    return 0;
}
