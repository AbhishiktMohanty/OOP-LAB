/*Q2. Create a class student which stores name, roll number and age of a student. Derive a class test from student
class, which stores marks in 5 subjects. Input and display the details of a student.*/

#include <iostream>
using namespace std;

class student
{
    char name[20];
    int roll, age;

public:
    void getData()
    {
        cout << "Enter the details of the student:" << endl;
        cout << "Enter name: ";
        cin.getline(name, 20);
        cout << "Enter Roll number: ";
        cin >> roll;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout << "\nDetails of the Student:\n";
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Age: " << age << endl;
    }
};

class test : public student
{
    int m1, m2, m3, m4, m5;

public:
    void getMarks()
    {
        cout << "Enter the Marks(out of 100):\n";
        cout << "Subject-1 : ";
        cin >> m1;
        cout << "Subject-2 : ";
        cin >> m2;
        cout << "Subject-3 : ";
        cin >> m3;
        cout << "Subject-4 : ";
        cin >> m4;
        cout << "Subject-5 : ";
        cin >> m5;
    }
    void displayMarks()
    {
        getData();
        getMarks();
        display();
        cout << "\nThe Marks of the student are:\n";
        cout << "Subject-1 : " << m1 << endl;
        cout << "Subject-2 : " << m2 << endl;
        cout << "Subject-3 : " << m3 << endl;
        cout << "Subject-4 : " << m4 << endl;
        cout << "Subject-5 : " << m5 << endl;
    }
};

int main()
{
    test s;
    s.displayMarks();

    return 0;
}