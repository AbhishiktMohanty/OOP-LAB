/*Q1. Write a program in C++ to create a Student class which stores the name, roll and branch of a student.
Derive three classes named InternalExam, MidSemesterExam and EndSemesterExam from it.
InternalExam stores internal marks for five different subjects (out of 30), MidSemesterExam stores
the mid semester exam marks for five different subjects (out of 20) and EndSemesterExam stores the
end semester exam marks for five different subjects (out of 50). Derive a class Result from InternalExam,
MidSemesterExam and EndSemesterExam to compute and display the total marks and percentage of a student.*/

#include <iostream>
using namespace std;

class student

{
public:
    char name[40];
    int roll;
    char branch[20];
    void getData()
    {
        cout << "Enter details of the student:" << endl;
        cout << "Enter name: ";
        cin.getline(name, 40);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }
};

class InternalExam : virtual public student
{

public:
    float im[5];
    void getInternal()
    {
        cout << endl;
        cout << "Enter the Internal Marks (out of 30 marks):" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject-" << i + 1 << ": ";
            cin >> im[i];
        }
    }
};

class MidSemesterExam : virtual public student
{

public:
    float mm[5];
    void getMidSem()
    {
        cout << endl;
        cout << "Enter the Mid-Sem Marks (out of 20 marks):" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject-" << i + 1 << ": ";
            cin >> mm[i];
        }
    }
};

class EndSemesterExam : virtual public student
{

public:
    float em[5];
    void getEndSem()
    {
        cout << endl;
        cout << "Enter the End-Sem Marks (out of 50 marks):" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject-" << i + 1 << ": ";
            cin >> em[i];
        }
    }
};

class result : public InternalExam, public MidSemesterExam, public EndSemesterExam
{
public:
    float totalMarks;
    void getResult()
    {
        student::getData();
        InternalExam::getInternal();
        MidSemesterExam::getMidSem();
        EndSemesterExam::getEndSem();
    }
    void displayresult()
    {
        float it = 0;
        for (int i = 0; i < 5; i++)
        {
            it = it + im[i] + mm[i] + em[i];
        }
        cout << "Total Marks: " << it << "\nTotal Percentage: " << it / 5 << "%" << endl;
    }
};

int main()
{

    result r;
    r.getResult();
    r.displayresult();
    return 0;
}