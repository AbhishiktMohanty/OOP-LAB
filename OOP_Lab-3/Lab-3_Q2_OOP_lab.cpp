/*Q2 Create a class Student which stores name, roll number and total marks for a student.
Input the data for a student and display it.*/

#include <iostream>
using namespace std;
class student
{
    private:
    int roll;
    float marks;
    string name;
    public:
    void input(void);
    void display(void);
};
void student::input(void)
{
    cout<<"Enter the name: ";
    getline(cin,name);
    cout<<"Enter the roll number: ";
    cin>>roll;
    cout<<"Enter the total marks: ";
    cin>>marks;
} 
void student::display(void)
{
    cout<<"\n----Details of the student---"<< endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Total Marks: "<<marks<<endl;
}
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}