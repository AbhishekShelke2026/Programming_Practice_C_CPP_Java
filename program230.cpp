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


        void CalculateDigits()
        {
            int i = 0;
            int iNo = 0;
            int iCount = 0;

            for(i = 0; i < iSize; i++)
            {
                iNo = Arr[i];

                while(iNo != 0)
                {
                    iCount++;

                    iNo = iNo / 10;
                }

                cout<<Arr[i]<<"Contains" <<iCount<<"digits in it"<<endl;
                iCount = 0;
            }
        }

       

};

int main()
{
    int iLength = 0;

    cout<<"Enter The No of Element that u want to store :"<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);         //dynamic objet creation

    //ArrayX aobj(iLength);                     static object creatiom

    aobj->Accept();
    
    aobj -> CalculateDigits();


    delete aobj;
    
    return 0;
}