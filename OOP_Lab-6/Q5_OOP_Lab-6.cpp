/*Q5. WAP to calculate simple interest of given principal amount. 
(Take rate of interest as default argument)*/

#include <iostream>
using namespace std;

class SI
{
    private:
    float si;
    int p,r,t;

    public:
    SI(int pr, int ti, int in = 10)
    {
        p = pr;
        t = ti;
        r = in;
    }

    void sim_int()
    {
        si = p*r*t/100.0;
    }

    void display()
    {
        cout << "Simple interest at 10% intrest is " << si << endl;
    }
};

int main()
{
    int pr, ti;
    cout<<"Enter the principal amount: ";
    cin>>pr;
    cout<<"Enter the time period: ";
    cin>>ti;
    SI ob1(pr,ti);
    ob1.sim_int();
    ob1.display();

    return 0;
}