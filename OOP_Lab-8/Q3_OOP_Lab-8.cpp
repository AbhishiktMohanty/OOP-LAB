/*Q3. Extend the program (Q2) to derive a class from result from classs 'test' which includes member function to
calculate total marks and percentage of a student. Input the data for a student and display its total marks and
percentage.*/

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
        cout << "\nThe Marks of the student are:\n";
        cout << "Subject-1 : " << m1 << endl;
        cout << "Subject-2 : " << m2 << endl;
        cout << "Subject-3 : " << m3 << endl;
        cout << "Subject-4 : " << m4 << endl;
        cout << "Subject-5 : " << m5 << endl;
    }
    int mark1(){
        return m1;
    }
    int mark2(){
        return m2;
    }
    int mark3(){
        return m3;
    }
    int mark4(){
        return m4;
    }
    int mark5(){
        return m5;
    }
};

class result:public test{
    int totalMark,percentage;
    public:
    void totalMarkPerc(){
        getData();
        getMarks();
        display();
        displayMarks();
        totalMark = mark1()+ mark2()+mark3()+mark4()+mark5();
        cout<<"\nTotal Marks:      "<<totalMark<<endl;
        cout<<"Total Percentage: "<<totalMark/5<<"%"<<endl;
    }
};

int main()
{
    result r;
    r.totalMarkPerc();

    return 0;
}