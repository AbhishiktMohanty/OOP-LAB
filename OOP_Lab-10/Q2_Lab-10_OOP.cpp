/*ii. Create a class which a complex number. Add two objects and display the resultant object. 
Overload the ++ (post and pre) operator for the class.*/

#include <iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int img;

    void input()
    {
        cout<<"Enter a complex number: ";
        cin>>real>>img;
    }
    Complex operator++()
    {
        this->real=real+1;
        this->img=img+1;
    }
    Complex operator++(int i)//post increament
    {
        real=real++;
        img=img++;
    }
    void display()
    {
        cout<<"The complex number is "<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c;
    c.input();
    cout<<"Pre increament"<<endl;
    ++c;
    c.display();
    cout<<"Post increament"<<endl;
    c++;
    c.display();
    return 0;
}