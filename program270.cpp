#include<iostream>
using namespace std;

//Apporoach 1 = using while loop

void Display ()
{
    int i = 0;

    i = 1;
    while(i <= 4)
    {
        i++;

        cout<<"*"<<endl;
    }
}

int main()
{


    Display();

    return 0;
}