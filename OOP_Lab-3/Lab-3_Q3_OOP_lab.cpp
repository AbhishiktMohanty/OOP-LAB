/*Q3 Modify the program ii) to store marks in 5 subjects. Calculate the total marks and percentage
of a student and display it using function. (Function should be defined outside the class)*/

#include <iostream>
using namespace std;

#define MAX 10

class student
{
private:
    string name;
    int roll;
    int marks1, marks2, marks3, marks4, marks5, total;
    float perc;

public:
    void input(void);
    void display(void);
};

void student::input(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks score in subject-1 : ";
    cin >> marks1;
    cout << "Enter marks score in subject-2 : ";
    cin >> marks2;
    cout << "Enter marks score in subject-3 : ";
    cin >> marks3;
    cout << "Enter marks score in subject-4 : ";
    cin >> marks4;
    cout << "Enter marks score in subject-5 : ";
    cin >> marks5;
}

void student::display(void)
{
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    perc = (float)total / 500 * 100;
    cout << "Name: " << name << "\nRoll Number: " << roll << "\nTotal: " << total << "\nPercentage: " << perc << "\n" << endl;
}

int main()
{
    student std[MAX];
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for (i=0; i<n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        std[i].input();
    }

    cout << endl;

    cout << "\n----Details of the students----";

    for (i=0; i<n; i++)
    {
        cout << "\nDetails of student " << (i + 1) << ":\n";
        std[i].display();
    }

    return 0;
}