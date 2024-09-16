// SOurce  = HEllo WorLd
// Sestination = HElloWorLd   (space nhi ghyacha)

#include<iostream>
using namespace std;

void strcpySpaceX(char *Dest , char *Src)
{

    while(*Src != '\0')
    {

        if(*Src != ' ')   // main logic
        {

            *Dest = *Src;
            *Dest++;
        }

        Src++;
        
    }

    *Dest = '\0';

}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the source string :"<<endl;
    cin.getline(Arr , 30);

    strcpySpaceX (Brr , Arr);    //strcpuX (200 , 100);

    cout<<"Small cgaeactors are  :"<<Brr<<endl;


    return 0;
}