/*Q5. Create a class 'shape'. Derive three classes from it: Circle, Triangle and Rectangle.Include the relevant
data members and functions in all the classes. Find the area of each shape and display it.*/

#include <iostream>
#include <conio.h>
using namespace std;
class shape
{
public:
    virtual void area() = 0; // pure virtual function
};
class circle : public shape
{
    float r; // r=radius
public:
    void area()
    {
        cout << "Enter radius : ";
        cin >> r;
        cout << "Area of circle : " << (2.146 * r * r)<<endl;
    }
};
class rectangle : public shape
{
    int l, b; // l=length , b=bredth
public:
    void area()
    {
        cout << "Enter length : ";
        cin >> l;
        cout << "Enter breadth : ";
        cin >> b;
        cout << "Area of rectangle : " << l * b<<endl;
    }
};
class triangle : public shape
{

    int h, b;
    float a;

public:
    void area()
    {
        cout << "Enter height : ";
        cin >> h;
        cout << "Enter breadth : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "Area of triangle : " << a<<endl;
    }
};
int main()
{
    cout<<"For circle: "<<endl;
    circle c; // object created
    c.area();
    cout<<"\nFor Rectangle:"<<endl;
    rectangle r; // object created
    r.area();
    cout<<"\nFor Triangle:"<<endl;
    triangle t; // object created
    t.area();
    getch();
    return (0);
}