import java.io.*;

class ExceptionDemo7
{
    public static void main(String A[])
    {
        try
        {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name :");
        String name = bobj.readLine();

        System.out.println("Enter your age :");
        String Age = bobj.readLine();

        System.out.println(" your name :"+name);
        System.out.println("your age :"+Age);

        }
        catch(Exception obj)
        {}
    }
}