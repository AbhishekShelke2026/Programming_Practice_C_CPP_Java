#include<iostream>
using namespace std;

void strcpyX(char *Dest , char *Src)
{

    while(*Src != '\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }

    *Dest = '\0';

}

int main()
{
    char Arr[30] = "HELLO";
    char Brr[30];


    strcpyX (Brr , Arr);    //strcpuX (200 , 100);

    cout<<"copies string is :"<<Brr<<endl;


    return 0;
}