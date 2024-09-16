import java.util.*;

class program209
{
    public static int SumEvenDigit(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
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

        iRet = SumEvenDigits(iValue);

    
        System .out.println("No of digits are :"+iRet);

    }


}