// Q2 all ok
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum, subtraction, multiplication;

    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;

    sum = x + y;
    subtraction = abs(x - y);
    multiplication = x * y;

    cout << "\nSum of two given integers is " << sum;
    cout << "\nDifference of two given integers is " << subtraction;
    cout << "\nMultiplication of two given integers is " << multiplication;

    return 0;
}