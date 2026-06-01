#include <iostream>
using namespace std;
// Abstract class
// user only calls area()
// user does not know internal formula calculation
class Shape
{
public:
    // Pure virtual function
    // Every shape must define area()
    virtual double area() = 0; //"= 0" means no implementation here
};
// Circle class --> Inherits shape class
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    Circle(double r)
    {
        radius = r;
    }
    // Circle area formula
    double area()
    {
        return 3.14 * radius * radius;
    }
};
// Rectangle class --> Inherits shape class
class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    // constructor
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
    // Rectangle area formula
    double area()
    {
        return length * breadth;
    }
};
int main()
{
    // shape s; //ERROR //Cannot create object of abstract class
    Circle c(5);
    Rectangle r(4, 6);
    // Calling common function //User only knows area
    cout << "Circle area: " << c.area() << endl;
    cout << "Rectangle area: " << r.area() << endl;
    return 0;
}
