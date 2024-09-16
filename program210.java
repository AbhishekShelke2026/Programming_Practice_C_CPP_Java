import java.util.*;

class program210
{
    public static int SumOddDigit(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo + iSum;
        }
        return iSum;
    }


    public static void main(String Arg[])
    {

        Scanner sobj  = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enyer the number");
        iValue = sobj.nextInt();

        iRet = SumOddDigit(iValue);

    
        System .out.println("No of  odd digits are :"+iRet);

    }


}