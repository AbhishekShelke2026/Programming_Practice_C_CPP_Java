#include<iostream>
using namespace std;

//Apporoach 3  = using recurssion

void Display()
{
    static int i = 1;   

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