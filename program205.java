import java.util.*;

class program205
{
    public static void main(String Arg[])
    {

        Scanner sobj  = new Scanner(System.in);

        int iValue = 0;
        int iCnt = 0;
        int iSum = 0;

        System.out.println("Enyer the number");
        iValue = sobj.nextInt();

        for(iCnt = 1; iCnt <= iValue / 2; iCnt++)
        {
            if ((iValue % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System .out.println("Summetion of factor is :"+iSum);

    }


}