/*Q4. Extend the program ii. to include a class sports, which stores the marks in sports activity. Derive the
result class from the classes 'test' and 'sports'. Calculate the total marks and percentage of a student.*/

#include <iostream>
using namespace std;
class Student{
    protected:
        char name[20];
        int roll_number, age;
    public:
        Student(){}
        void getDetails(){
            cout<<"Enter the Name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Enter the Roll Number: ";
            cin>>roll_number;
            cout<<"Enter the age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student{
    protected:
        int s1, s2, s3, s4, s5;
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Enter the marks: \n";
            cout<<"Subject 1: ";
            cin>>s1;
            cout<<"Subject 2: ";
            cin>>s2;
            cout<<"Subject 3: ";
            cin>>s3;
            cout<<"Subject 4: ";
            cin>>s4;
            cout<<"Subject 5: ";
            cin>>s5;
        }
        void putmarks(){
            cout<<"Subject 1: "<<s1<<endl;
            cout<<"Subject 2: "<<s2<<endl;
            cout<<"Subject 3: "<<s3<<endl;
            cout<<"Subject 4: "<<s4<<endl;
            cout<<"Subject 5: "<<s5<<endl;
        }
};
class Sports: public Student{
    protected:
        int indoor, outdoor;
    public:
        Sports(): Student(){}
        void getscore(){
            cout<<"\nEnter the Sports scores: \n";
            cout<<"Enter Indoor Sports Score: ";
            cin>>indoor;
            cout<<"Enter Outdoor Sports Score: ";
            cin>>outdoor;
        }
        void putscore(){
            cout<<"Indoor Score: "<<indoor<<endl;
            cout<<"Outdoor Score: "<<outdoor<<endl;
        }
};
class Result: public Sports, public Test{
    int total;
    public:
        Result(): Sports(), Test(){
            Test::getDetails();
            getmarks();
            getscore();
            total = indoor + outdoor + s1 + s2 + s3 + s4 + s5;
        }
        void display(){
            cout<<endl;
            cout<<"\nDetails of the Student\n";
            cout<<"-------------------------\n";
            Test::putDetails();
            cout<<"\nTest Marks: \n";
            Test::putmarks();
            cout<<"\nSports Scores: \n";
            Sports::putscore();
            cout<<"Total: "<<total<<endl;
            cout<<"Percentage: "<<total / 7 <<" % "<<endl;
        }
};
int main(){
    Result result;
    result.display();
    return 0;
}