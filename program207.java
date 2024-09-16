import java.util.*;

class program207
{
    public static int Difference(int iNo)
    {
        int iCnt = 0 , iSumF = 0 , iSumN = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if ((iNo % iCnt) == 0)   //factor
            {
                iSumF = iSumF + iCnt;
            }

            else                    //Non Factor
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumF;
        

    }


    public static void main(String Arg[])
    {

        Scanner sobj  = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enyer the number");
        iValue = sobj.nextInt();

        iRet = Difference(iValue);

    
        System .out.println("Diff between of factor and nf is :"+iRet);

    }


}