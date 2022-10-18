/*Q3. Create a class which stores time in hh:mm format. Include all the constructors. The parameterized
constructor should initialize the minute value to zero, if it is not provided.*/

#include<iostream>
using namespace std;

class Time{
    public:
        int hh, mm;
        Time(){
            hh=0;
            mm=0;
        }
        Time(int h, int m=0){
            hh=h;
            mm=m;
        }
        Time(Time &obj){
            hh=obj.hh;
            mm=obj.mm;
        }
        void display();
};
void Time::display(){
    cout<<"Time is "<<hh<<":"<<mm<<endl;
}
int main(){
    int choice, h, m;
    cout<<"Time Menu:\n1. Enter hours and minutes\n2. Enter hours only (Minutes would be assigned 0)\n3. Stop program.\nEnter choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            {
			cout<<"Enter hours and minutes in hh<space>mm format: ";
            cin>>h>>m;
            Time ob1(h,m);
            Time obc(ob1);
            obc.display();
            break;
        }
        case 2:
        	{
			
            cout<<"Enter hours: ";
            cin>>h;
            Time ob2(h);
            ob2.display();
            break;
        }
        case 3:
        	{
            Time ob3;
            ob3.display();
            break;
        }
        default:
            cout<<"Invalid choice input"<<endl;
    }
    return 0;
}