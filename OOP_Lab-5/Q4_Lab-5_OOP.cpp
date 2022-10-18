//Q4. WAP to swap two integers using pass by reference.
//done
#include <iostream>
using namespace std;
void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout << "\nBefore swapping :\n" << " A = " << a << "\n B = " << b << endl;
    swap(a, b);
    cout << "\nAfter swapping :\n" << " A = " << a << "\n B = " << b << endl;
    return 0;
}