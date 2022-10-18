/*Q2. Create a class which stores employee name,id and salary Derive two classes from "Employee' class: 
'Regular' and 'Part-Time'. The 'Regular' class stores DA, HRA and basic salary. The Part-Time' class stores 
the number of hours and pay per hour. Calculate the salary of a regular employee and a part-time employee.
[Gross salary-Basic salary + DA + HRA, DA - 80% of Basic salary HRA-10% of Basic salary]*/

#include<iostream>
using namespace std;

class employee{
    char name[40];
    int id, salary;
    public:
    void getData(){
        // cout<<"Enter the Details of the Employee:"<<endl;
        cout<<"Name: ";
        // cin.getline (name, 40);
        cin>>name;
        cout<<"ID: ";
        cin>>id;
        // cout<<"Salary: ";
        // cin>>salary;
    }
    void display(){
        cout<<"The Details of the Employee:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class regular:public employee{
    int da,hra,basicSalary,RegSalary;
    public:
    void getRegData(){
        cout<<"Enter the details for Regular Employee:"<<endl;
        getData();
        cout<<"Enter DA: ";
        cin>>da;
        cout<<"Enter HRA: ";
        cin>>hra;
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
    }
    void calRegSal(){
        RegSalary = basicSalary + da + hra;
        cout<<"\nSalary of the Regular Employee is "<<RegSalary<<endl;
    }
};

class partTime:public employee{
    int hr,payhr,PartSalary;
    public:
    void getPartData(){
        cout<<"\nEnter the details for Part-Time Employee:"<<endl;
        getData();
        cout<<"Enter number of hour: ";
        cin>>hr;
        cout<<"Enter pay per hour: ";
        cin>>payhr;
    }
    void calPartSal(){
        PartSalary = hr*payhr;
        cout<<"\nSalary of the Part-Time Employee is "<<PartSalary<<endl;
    }
};

int main(){
    regular r;
    r.getRegData();
    r.calRegSal();
    cout<<endl;
    partTime p;
    p.getPartData();
    p.calPartSal();
}