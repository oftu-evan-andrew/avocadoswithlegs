using System;

class Shape
{
    protected double radius = 0, side1 = 0, side2 = 0;

    public Shape()
    {
        Console.WriteLine("Shape Initialized");
    }

    public Shape(double radius)
    {
        this.radius = radius;  
        Console.WriteLine("Circle Shape Initialized radius: " + this.radius);
    }

    public Shape(double side1, double side2)
    {
        this.side1 = side1; 
        this.side2 = side2;
        Console.WriteLine("Square Shape Initialized side 1: " + this.side1 + " side 2: " + this.side2);
    }
}

class Circle: Shape
{
    public Circle(double radius) : base(radius)
    {
        Console.WriteLine("Circle Initialized radius: " + this.radius);
    }

    public void Area()
    {
        const double pi = 3.14;
        double area = pi * this.radius * this.radius; 
        Console.WriteLine("Circle Area: " + area);
    }

    public void Circumference()
    {
        const double pi = 3.14;
        double circumference = 2 * pi * this.radius;
        Console.WriteLine("Circle Circumference: " + circumference);
    }
}

class Square : Shape
{
    public Square(double side1, double side2) : base(side1, side2)
    {
        Console.WriteLine("Square Initialized side 1: " + this.side1 + " side 2: " + this.side2);
    }

    public void Area()
    {
        double area = this.side1 * this.side2;
        Console.WriteLine("Square Area: " + area);
    }

    public void Perimeter()
    {
        double perimeter = 2 * (this.side1 + this.side2);
        Console.WriteLine("Square Perimeter: " + perimeter);
    }
}

class Program
{
    static void Main()
    {
        Circle test_shape = new Circle(2);
        Square test_shape2 = new Square(2.5, 4.5);
        
        test_shape.Area();
        test_shape.Circumference();

        test_shape2.Area();
        test_shape2.Perimeter();
    }
}