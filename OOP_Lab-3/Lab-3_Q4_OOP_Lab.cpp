/*Q4 Create a class Complex which stores real and imaginary part of a complex number.
Input 10 complex numbers and display them.*/

#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    void input(){
        cout << "Enter the real part of the number: ";
        cin>>real;
        cout << "Enter the imaginary part of the number: ";
        cin>>imag;
    }
    void display(){
        cout <<real <<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex arr[10];
    cout<<"Enter 10 complex numbers:\n";
    for (int i=0;i<10;i++){
        cout<<"\t----Complex Number"<<(i+1)<<"----"<<endl;
        arr[i].input();
    }
    cout<<"\n\nThe 10 entered complex numbers are:\n";
    for (int i=0;i<10;i++){
        arr[i].display();
    }
    return 0;
}