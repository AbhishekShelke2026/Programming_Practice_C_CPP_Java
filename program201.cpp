#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1 ;
        int iNo2 ;

        Arithmatic(int A = 0 , int B = 0)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAns = 0;

            iAns = iNo1 + iNo2;

            return iAns;
        }
};

int main()
{
    int iValue1 = 0 ,  iValue2 = 0;
    int iRet = 0;

    cout<<"enter no "<<endl;
    cin>>iValue1;

    cout<<"enter no "<<endl;
    cin>>iValue2;   

    Arithmatic *aobj = new Arithmatic(iValue1 , iValue2);

    iRet = aobj->Addition();

    cout<<"addition is :"<<iRet<<endl;




    return 0; 
}