import java.util.*;

class program239
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of element");
        int iSize = sobj.nextInt();


        int Arr[] = new int[iSize];


        System.out.println("Enter the element:");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements aare:");

        for(int j = 0; j < Arr.length; j++)
        {
            System.out.println(Arr[j]);
        }
    }
}