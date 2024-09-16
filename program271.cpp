#include<iostream>
using namespace std;

//Apporoach 3  = using recurssion   auto storage class

void Display()
{
    auto i = 1;   // same as int i = 0;

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;

        Display();
    }
}

int main()
{


    Display();

    return 0;
}