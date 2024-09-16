
import java.util.*;

class program678
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();


        str = str.replaceAll("\\s+" , " ");

        String Arr[] = str.split(" ");

        HashMap <String , Integer> hobj = new HashMap <String , Integer> ();


        int Frequency = 0;

        for(String A : Arr)
        {
            if(hobj.containsKey(A))  //String is already present
            {
                Frequency = hobj.get(A);
                hobj.put(A , Frequency);
            }
            else   // String occour first time
            {
                hobj.put(A , 1);
            }
        }

    Set <String> setobj = hobj.keySet();

    int iMax = 0;
    String temp = null;

    for(String B: setobj )
    {
        if(hobj.get(B) > iMax)
        {
            iMax = hobj.get(B);
            temp = B;
        }
    }

    System.out.println(temp +"is a word which occour maximum times ie : " +iMax+ " times");


    }

}


