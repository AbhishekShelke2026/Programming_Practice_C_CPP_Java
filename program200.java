import java.util.*;

class Arithmatic
{
    public int iNo1;
    public int iNo2;

    public Arithmatic(int A , int B)
    {
        int iNo1 = A;
        int iNo2 = B;
    }

    public int Addition()
    {
        int iAns = 0;

        iAns =  iNo1 + iNo2;

        return iAns;
    }
}

class program200
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0 , iValue2 = 0;
        int iAns = 0;

        System.out.println("Enter First no.");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second no.");
        iValue2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iValue1 , iValue2);

        iAns  = aobj.Addition();


        System.out.println("Addition is :"+iAns);

        
    }
}

// int    nextInt()
//float   nextFloat()
//double   nextDouble()
//string   nextLine()