
class Arithmatic
{
    public int No1;
    public int No2;
    
    public Arithmatic()
    {
        System.out.println("Inside default constructor");
        No1 = 0;
        No2 = 0;
    }

    public Arithmatic(int A, int B)
    {
        System.out.println("Inside parametrised constructor");
        No1 = A;
        No2 = B;
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    
    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
    
}
class Encapsulation 
{
    public static void main(String Arr[])
    {
        System.out.println("Inside main function");

        Arithmatic aboj1 = new Arithmatic();
        Arithmatic aboj2 = new Arithmatic(11,10);

        int Ret = 0;

        Ret = aboj2.Addition();
        System.out.println("Addition :"+Ret);

        Ret = aboj2.Substraction();
        System.out.println("Substraction :"+Ret);   

    }

}