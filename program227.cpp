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

        void Display()
        {
            int i = 0;

            cout<<"Elements aree "<<endl;

            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        float Average(int Arr[] , int iSize)
            {
                int i = 0 , iSum = 0;
                float fAns = 0.0f;

                for(i = 0; i < iSize; i++)

                {
                    iSum = iSum + Arr[i];
                }

                fAns = (float)iSum  /  (float)iSize;

                return ();
            }

};

int main()
{
    int iLength = 0;
    float fRet = 0;

    cout<<"Enter The No of Element that u want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Average();

    cout<<"Average is"<<fRet<<endl;



    
    return 0;
}