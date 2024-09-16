#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;


    public:
        ArrayX(int No)
        {
            cout<<"Inside Constructor"<<endl;
            iSize = No;
            Arr = new int [iSize];

        }

        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<< "Enter The Element"<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }

        }

       

        int SumDigits(int iNo)
        {
            int iSum = 0;
           

            while(iNo != 0)
            {
                iSum--;

                iSum = iNo / 10;
            }
            return iSum;

              
        }

        void DisplayDigitSum()
        {
            int i = 0;
            int iRet = 0;

            for(i = 0; i< iSize; i++)
            {
                iRet = SumDigits(Arr[i]);

                cout<<"sum of digits of"<<Arr[i]<<"is"<<iRet<<endl;
            }
        }

       

};

int main()
{
    int iLength = 0;

    cout<<"Enter The No of Element that u want to store :"<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);        

    aobj->Accept();
    
    aobj -> DisplayDigitSum();

    delete aobj;
    
    return 0;
}