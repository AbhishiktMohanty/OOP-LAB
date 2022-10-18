/*Q7.3). WAP to demonstrate the order of execution of constructor and destructor of a class.*/

#include <iostream>
using namespace std;
class Abc
{
    int a, b;

public:
    Abc()
    {
        cout << "Constructor called." << endl;
    }
    ~Abc()
    {
        cout << "Destructor Called." << endl;
    }
};
int main()
{
    Abc ob;
    // Abc obj;
    return 0;
}