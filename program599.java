import java.util.*;

class program599
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+" , " ");

        String Arr [] = str.split(" ");


        int i = 0;
        int iMax = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
            }
        }

        System.out.println("Largest length of world is :" +iMax);

    }
}