import java.util.*;

class program588
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        int iCnt = 0 , i = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                iCnt++;
            }
        }

        System.out.println("No. of white spaces are :"+iCnt);

    }
}