/*Q5 Create a class which stores id, name, age and basic salary of an employee.
Input data for n number of employees. Calculate the gross salary of all the employees
and display it along with all other details in a tabular form.

     [Gross salary-Basic salary + DA + HRA, DA - 80% of Basic salary HRA-10% of Basic salary]*/


#include<iostream>
using namespace std;

class salary
{
  string name;
  int age;
  int basic;
  int da;
  int hra;
  int gross;
  public :
    void Input()
    {
      cout << "Enter the name : ";
      cin >> name;
      cout << "Enter the age : ";
      cin >> age;
      cout << "Enter basic salary : ";
      cin >> basic;
      da = 0.8*basic;
      hra = 0.1*basic;
      gross = basic + hra + da;
    }
    void display()
    {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Basic salary: " << basic << endl;
      cout << "Gross salary: " << gross << endl;
    }
};
int main()
{
  int number;
  cout << "Enter the number of employee : ";
  cin >> number ;
  salary employee[number];
  for(int i=0;i<number;i++)
  {
    cout<<"\nEnter the details of " << i+1<<endl;
    employee[i].Input();
  }
  cout << "\n-----Employee Details-----"<<endl;
  for(int i=0;i<number;i++)
  {
    cout<<"\nEmployee details of " << i+1 << ":" <<endl;
    employee[i].display();
  }
  return 0;
}