#include<iostream>
using namespace std;

float area(float);
float area(float,float);
float area(float,float,float);

int main()
{
    float r,l,b1,b2,h,c=0.5;
    cout<<"Enter the values upto 2 decimal places:\n";
    cout<<"Enter Radius of the circle (in cm): ";
    cin>>r;
    cout<<"Enter Length and breath of rectangle with a space in between (in cm): ";
    cin>>l>>b1;
    cout<<"Enter the base and height of the triangle with a space in between (in cm): ";
    cin>>b2>>h;

    cout<<"\nArea of the circle is : "<<area(r)<<" cm^2";
    cout<<"\nArea of the rectangle is : "<<area(l,b1)<<" cm^2";
    cout<<"\nArea of the triangle is : "<<area(c,b2,h)<<" cm^2";

}

float area(float r){
    float area = 3.14*r*r;
    return area;
}
float area(float l,float b1)
{
    float area = l*b1;
    return area;
}
float area(float c,float b2,float h)
{
    float area = c*b2*h;
    return area;
}