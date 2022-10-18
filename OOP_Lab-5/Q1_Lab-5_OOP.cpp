/*Q1. Create a class distance which stores a distance in feet and inches. Input 2 distance
values in objects, add them, store the resultant distance in and object and display it
                     [Write the program in two ways]
            a. Store the resultant distance in the calling object:C3.add(C1,C2)
            b. Return the resultant object C3=C1.add(C2) */
// done a

#include <iostream>
using namespace std;

class Distance
{
  int f1, i1;

public:
  int f, i;
  void input()
  {
    cout << "Enter distance in feet and inches : ";
    cin >> f1 >> i1;
  }
  // void add(Distance A, Distance B)
  // {
  //   int f, i;
  //   f = A.f1 + B.f1;
  //   i = A.i1 + B.i1;
  //   if (i > 12)
  //   {
  //     i = i % 12;
  //     f++;
  //   }
  //   cout << "Total Distance = " << f << " feet " << i << " inches";
  // }

  // Method 2
  void add(Distance A, Distance B)
  {
    Distance C;
    C.f = A.f1 + B.f1;
    C.i = A.i1 + B.i1;
    if (i > 12)
    {
      C.i = i % 12;
      C.f++;
    }
    cout << "Total Distance = " << f << " feet " << i << " inches";
  }
};    
int main()
{
  Distance C1, C2, C3;
  cout << "Enter first distance : \n";
  C1.input();
  cout << "Enter second distance : \n";
  C2.input();
  // C3.add(C1, C2);
  C3 = C3.add(C1, C2);
  return 0;
}