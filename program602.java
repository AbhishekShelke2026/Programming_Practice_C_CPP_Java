import java.util.*;

class program602
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        System.out.println("Enter the charactor that u want to search :");
        String s = sobj.nextLine();

        char ch = s.charAt(0);

        System.out.println("Entered charactor is :" +ch);

    
    }
}