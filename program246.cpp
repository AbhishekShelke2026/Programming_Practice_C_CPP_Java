#include<iostream>
using namespace std;

int strLenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"ENter your name"<<endl;
    cin.getline(Arr , 30);

    iRet = strLenX(Arr);

    cout<<"Length of string is ="<<iRet<<endl;

    return 0;
}