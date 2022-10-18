// Q4 all ok
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter the three sides of the triangle: ";
  cin >> a >> b >> c;

  float s = (float)(a + b + c) / 2;
  float area = sqrt(s * (s - a) * (s - b) * (s - c));

  cout << "Area of the triangle is " << area;

  return 0;
}