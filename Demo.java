
class Marvellous
{
    public int A;
    protected float B;
    private int C;

    public Marvellous()
    {
        A = 10;
        B = 20.10f;
        C = 30;

    }

    void Display()
    {
        int i = 11;
        System.out.println("Value of i is :" +i);
    }
}

class Demo
{
    public static void main(String Arg[])
    {
        Marvellous mobj = new Marvellous();

        mobj.Display();
    }
}