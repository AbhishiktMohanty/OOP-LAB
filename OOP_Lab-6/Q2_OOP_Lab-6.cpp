/*Q2. Create two classes which stores distance in feet, inches and meter, centimeter format respectively.
Write a function which compares distance in object of these classes and displays the larger one.*/
#include <iostream>
using namespace std;

class DisFeetInch;
class DisMeterCenti
{
    float totalCm;

public:
    DisMeterCenti(float m, float c)
    {
        totalCm = (m * 100) + c;
    }
    friend void compares(DisMeterCenti &x, DisFeetInch &y);
};
class DisFeetInch
{
    float totalInch;

public:
    DisFeetInch(float f, float i)
    {
        totalInch = (f * 12) + i;
    }

    friend void compares(DisMeterCenti &, DisFeetInch &);
};
void compares(DisMeterCenti &a, DisFeetInch &b)
{
    if ((b.totalInch * 2.54) < a.totalCm)
    {
        cout << "Distance in Meters and Centimeters is larger\n";
    }
    else
    {
        cout << "Distance in Feet and Inches is larger\n";
    }
}
int main()
{
    int m, c, f, i;
    cout << "Enter the distance in Meter and Centimeter : ";
    cin >> m >> c;
    cout << "Enter the distance in Feet and Inches : ";
    cin >> f >> i;
    DisMeterCenti a(m, c);
    DisFeetInch b(f, i);
    compares(a, b);
}