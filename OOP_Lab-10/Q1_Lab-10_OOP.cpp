/*i. WAP to overload following operators for class distance, which stores the distance in feet and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the inches value (D2=4+DI)*/

// #include <iostream>
// using namespace std;

// class Distance
// {
//     public:
//     double inches;
//     double feet;
//     Distance()
//     {
//         inches=0.0;
//         feet=0.0;
//     }
//     void input()
//     {
//         cout<<"Enter the distance in feet and inches: ";
//         cin>>feet;
//         cin>>inches;
//     }
//     friend Distance operator+ (Distance&,Distance&);
//     void display()
//     {
//         cout<<"The distance after adding the two data is: "<<feet<<" "<<inches<<endl;
//     }
// };

// Distance operator+ (Distance &d1,Distance &d2)
// {
//     Distance d3;
//     d3.inches=d1.inches+d2.inches;
//     d3.feet=d1.feet+d2.feet;
//     while(d3.inches>12.0)
//     {
//         d3.inches=d3.inches-12.0;
//         d3.feet=d3.feet+1.0;
//     }
//     return d3;
// }

// int main()
// {
//     Distance d1;
//     Distance d2;
//     d1.input();
//     d2.input();
//     Distance d3;
//     d3= d1+d2;
//     d3.display();
//     return 0;
// }



#include <iostream>
using namespace std;

class Distance
{
    public:
    double inches;
    double feet;
    Distance()
    {
        inches=0.0;
        feet=0.0;
    }
    void input()
    {
        cout<<"Enter the distance in feet and inches: ";
        cin>>feet;
        cin>>inches;
    }
    friend Distance operator+ (Distance&,int);
    void display()
    {
        cout<<"The distance after adding the data with 4 is: "<<feet<<" "<<inches<<endl;
    }
};

Distance operator+ (Distance &d1,int x)
{
    Distance d3;
    d3.inches=d1.inches+x;
    d3.feet=d1.feet+x;
    while(d3.inches>12.0)
    {
        d3.inches=d3.inches-12.0;
        d3.feet=d3.feet+1.0;
    }
    return d3;
}

int main()
{
    Distance d1;
    d1.input();
    Distance d3;
    d3= d1+4;
    d3.display();
    return 0;
}
