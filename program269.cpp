#include<iostream>
using namespace std;

//Apporoach 1 = using foo loop

void Display ()
{
    int i = 0;

    for(i = 1; i <= 4; i++)
    {
        cout<<"*"<<endl;
    }
}

int main()
{


    Display();

    return 0;
}