/*iii. WAP to add two objects of time class. Overload the operator =  to assign two objects Overload
the assignment operator.*/


#include <iostream>
using namespace std;

class Time
{
    public:
    int hour;
    int min;
    int sec;
    Time()
    {
        hour=0;
        min=0;
        sec=0;
    }
    void input()
    {
        cout<<"Enter the time in hour:minute:sec: ";
        cin>>hour>>min>>sec;
    }

    Time operator= (Time t)
    {
        hour=hour+t.hour;
        min=min+t.min;
        sec=sec+t.sec;
        while(sec>60)
        {
            sec=sec-60;
            min=min+1;
        }
        while(min>60)
        {
            min=min-60;
            hour=hour+1;
        }
    }

    void display()
    {
        cout<<"Time in hour minute and seconds format is "<<hour<<":"<<min<<":"<<sec<<endl;
    }
};

int main()
{
    Time t1;
    Time t2;
    t1.input();
    t2.input();
    Time t3;
    t3=t1;
    t3=t2;
    t3.display();
    return 0;
}