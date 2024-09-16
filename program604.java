import java.util.*;

class program604
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        System.out.println("Enter the word that u want to search :");
        String s = sobj.nextLine();

        
        str = str.trim();
        str = str.replaceAll("\\s+" , " ");

        String Arr[] =  str.split(" ");

        int iCnt = 0;
        for(String s : Arr)
        {
            if(word.equals(s))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of word is : " +iCnt);

    
    }
}