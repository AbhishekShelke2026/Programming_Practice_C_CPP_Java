#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

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

};

int main()
{
    int iLength = 0;

    cout<<"Enter The No of Element that u want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    aobj.Arr = NULL;
    aobj.iSize = 20;


    return 0;
}