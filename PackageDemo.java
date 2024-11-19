import Marvellous.Circle;

import Marvellous.Infosystem.Square;

class PackageDemo
{
    public static void main(String A[])
    {
        Circle cobj  = new Circle();

        float Ans = 0.0f;

        Ans = cobj.CircleArea(10.5f);

        System.out.println("Area of Circle :" +Ans);

        Square sobj = new Square();

        Ans = sobj.SquareArea(10.5f);

        System.out.println("Area of square is :" +Ans);

    }
}

// javac -d . Circle.java
// Don't execute this code directly