// Q1. WAP to swap private data member of two classes. [The classes have no relation with each other].
//WAP to swap private data members of two classes
#include <iostream>
using namespace std;

class C2;
class C1
{
    private:
    int a;
    friend void swap(C1 a, C2 b);
    public:
    void input(int x)
    {
        a = x;
    }
};

class C2
{
    private:
    int b;
    friend void swap(C1 a, C2 b);
    public:
    void input(int y)
    {
        b = y;
    }
};

void swap(C1 obj1, C2 obj2)
{
    int t;
    cout << "Before swapping: " << obj1.a << " " << obj2.b << endl;
    t = obj1.a;
    obj1.a = obj2.b;
    obj2.b = t;
    cout << "After swapping: " << obj1.a << " " << obj2.b << endl;
}

int main()
{
    int n1,n2;
    cout<<"Enter the 1st number: ";
    cin>>n1;
    cout<<"Enter the 2nd number: ";
    cin>>n2;
    C1 ob1;
    C2 ob2;
    ob1.input(n1);
    ob2.input(n2);
    swap(ob1,ob2);

    return 0;
}
