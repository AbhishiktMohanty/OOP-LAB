//Q1 WAP to display the message "hello" followed by your name on screen.
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline (cin, name);
    cout << "Hello"<<" "<<name<<"!";
    return 0;
}