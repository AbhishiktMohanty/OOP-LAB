// Q3. WAP to count the number of objects in a class.
// done

#include <iostream>
using namespace std;
class MyClass
{
private:
    static int count;

public:
    MyClass()
    {
        cout << "Calling To Do work" << endl;
        count++;
    }
    static int objCount()
    {
        return count;
    }
};
int MyClass::count;
main()
{
    int a;
    cout << "Enter number of times you want to do the work : ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        MyClass my_obj;
    }
    int count;
    count = MyClass::objCount();
    cout << "Number of Objects : " << count << endl;
}