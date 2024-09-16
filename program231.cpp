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

       

        int CalculateDigits(int iNo)
        {
            int iCount = 0;
           

            while(iNo != 0)
            {
                iCount++;

                iNo = iNo / 10;
            }
            return iCount;

              
        }

        void DisplayDigitsCount()
        {
            int i = 0;
            int iRet = 0;

            for(i = 0; i< iSize; i++)
            {
                iRet = CalculateDigits(Arr[i]);

                cout<<Arr[i]<<"contains"<<iRet<<"digits in it"<<endl;
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
    
    aobj -> DisplayDigitsCount();

    delete aobj;
    
    return 0;
}