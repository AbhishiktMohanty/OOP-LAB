/*Q7.2). Create a class which stores X & Y co-ordinates of a point write a function to find distance
between two point, initialize the object using default constructor, parameterized constructor and copy constructor
*/

#include <iostream>
#include <math.h>
using namespace std;
class Distance
{
    int x, y, x1, y1;
    float dis;

public:
    Distance(int a = 4, int b = 6, int c = 8, int d = 9)
    {
        x = a;
        y = b;
        x1 = c;
        y1 = d;
        dis = sqrt((pow((x - x1), 2)) + (pow((y - y1), 2)));
    }
    Distance(Distance &o)
    {
        x = o.x;
        y = o.y;
        x1 = o.x1;
        y1 = o.y1;
        dis = sqrt((pow((x - x1), 2)) + (pow((y - y1), 2)));
    }
    void display()
    {
        cout << endl
             << "The Distance of the co-ordinates is:  " << dis;
    }
};
int main()
{
    int a, b, c, d;
    cout << "Enter the X1 coordinate: ";
    cin >> a;
    cout << "Enter the Y1 coordinate: ";
    cin >> b;
    cout << "Enter the X2 coordinate: ";
    cin >> c;
    cout << "Enter the Y2 coordinate: ";
    cin >> d;
    // Distance ob1;
    // ob1.display();
    Distance obj(a, b, c, d);
    cout << "\nUsing Parameterized constructor:";
    obj.display();
    Distance ob(obj);
    cout << "\n\nUsing Copy constructor:";
    ob.display();
    return 0;
}