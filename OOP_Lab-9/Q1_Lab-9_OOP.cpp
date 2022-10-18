/*Q1. Write a program in C++ to create a Student class which stores the name, roll and branch of a student. 
Derive three classes named InternalExam, MidSemesterExam and EndSemesterExam from it. 
InternalExam stores internal marks for five different subjects (out of 30), MidSemesterExam stores 
the mid semester exam marks for five different subjects (out of 20) and EndSemesterExam stores the 
end semester exam marks for five different subjects (out of 50). Derive a class Result from InternalExam,
MidSemesterExam and EndSemesterExam to compute and display the total marks and percentage of a student.*/

// output error

#include <iostream>
using namespace std;

class student{
    char name[40];
    int roll;
    char branch[40];
    public:
    void getData(){
        cout<<"Enter details of the student:"<<endl;
        cout<<"Enter name: ";
        cin.getline (name, 40);
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter branch: ";
        cin>>branch;
    }
    void display(){
        cout<<"\nDeatils of the Student:"<<endl;
        cout<<"Name:        "<< name<<endl;
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"The branch:  "<<branch<<endl;
    }

};

class InternalExam:public student{
      int im1,im2,im3,im4,im5, it;
      public:
      void getInternal(){
        cout<<endl;
        cout<<"Enter the Internal Marks (out of 30 marks):"<<endl;
        cout<<"Subject-1: ";
        cin>>im1;
        cout<<"Subject-2: ";
        cin>>im2;
        cout<<"Subject-3: ";
        cin>>im3;
        cout<<"Subject-4: ";
        cin>>im4;
        cout<<"Subject-5: ";
        cin>>im5;
      }
      int totalInternal(){
        it=im1+im2+im3+im4+im5;
        return it;
      }
};

class MidSemesterExam:public student{
    int mm1,mm2,mm3,mm4,mm5,mt;
    public:
    void getMidSem(){
        cout<<endl;
        cout<<"Enter the Mid-Sem Marks (out of 20 marks):"<<endl;
        cout<<"Subject-1: ";
        cin>>mm1;
        cout<<"Subject-2: ";
        cin>>mm2;
        cout<<"Subject-3: ";
        cin>>mm3;
        cout<<"Subject-4: ";
        cin>>mm4;
        cout<<"Subject-5: ";
        cin>>mm5;
    }
    int totalMid(){
        mt=mm1+mm2+mm3+mm4+mm5;
        return mt;
    }
};

class EndSemesterExam:public student{
    int em1,em2,em3,em4,em5,et;
    public:
    void getEndSem(){
        cout<<endl;
        cout<<"Enter the Mid-Sem Marks (out of 50 marks):"<<endl;
        cout<<"Subject-1: ";
        cin>>em1;
        cout<<"Subject-2: ";
        cin>>em2;
        cout<<"Subject-3: ";
        cin>>em3;
        cout<<"Subject-4: ";
        cin>>em4;
        cout<<"Subject-5: ";
        cin>>em5;
    }
    int totalEnd(){
        et=em1+em2+em3+em4+em5;
        return et;
    }
};

class result:public student, public InternalExam, public MidSemesterExam, public EndSemesterExam{
    int totalMarks;
    public:
    void TotalMarks(){
        totalMarks= totalInternal() + totalMid() + totalEnd();
        cout<<"\nTotal Marks:      "<<totalMarks<<endl;
        cout<<"Total Percentage: "<<totalMarks/5<<"%"<<endl;
    }
};

int main(){
    student s;
    s.getData();
    InternalExam i;
    i.getInternal();
    MidSemesterExam m;
    m.getMidSem();
    EndSemesterExam e;
    e.getEndSem();
    s.display();
    result r;
    r.TotalMarks();
}