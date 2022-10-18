/*Q4. Create a class which stores a sting and its length as data members. Include all the constructors.
Include a member function to join two strings and display the concatenated string.*/

//Concatenate two Strings and Constructors
#include <iostream>
using namespace std;

class Str
{
    private:
    string str;
    int len;

    public:
    Str()
    {
        str = "Hey_";
        len = 4;
    }

    Str(string x, int l)
    {
        str = x;
        len = l;
    }

    Str(Str &obj)
    {
        str = obj.str;
        len = obj.len;
    }

    void concat(Str ob1, Str ob2)
    {
        str = ob1.str + ob2.str;
        len = ob1.len + ob2.len;
    }

    void display()
    {
        cout << "String is " << str << " of size " << len << endl;
    }
};

int main()
{
    int l;
    char s[100];
    
    cout<<"Enter the String: ";
    cin.getline (s, 100);
    cout<<"Enter the length of the string: ";
    cin>>l;    
    Str ob1;
    ob1.display();
    Str ob2(s,l);
    Str ob3(ob1);
    ob1.concat(ob1,ob2);
    ob2.display();
    cout << "\nAfter Concattenation: " << endl;
    ob1.display();
    return 0;
}