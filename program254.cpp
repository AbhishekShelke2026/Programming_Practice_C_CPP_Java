#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "HEllo World";
    char Brr[30] = "INDIA";
    int iRet = 0;

    strcat(Brr,Arr);

   

    cout<<"Destination string : "<<Brr<<endl;

    return 0;
}