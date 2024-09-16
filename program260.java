import java.util.*;

class program260
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name");
        String name = sobj.nextLine();

        int i = 0;
        int iCnt = 0;
        char ch = 0;

        for(i = 0; i < name.length(); i++)
        {
            ch = name.charAt(i);

            if((ch >= 'A') && (ch <= 'Z'))
            {
                iCnt++;
            }
           
        }

        System.out.println("Capital letters are" +iCnt);

    
    }
}