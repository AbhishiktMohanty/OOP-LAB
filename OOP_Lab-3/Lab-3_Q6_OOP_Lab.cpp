/*Q6 Create a class Point which stores x and y coordinates of a point.
 Calculate distance between two given points and display it.*/
 
#include<iostream>
#include <cmath>
using namespace std;
class dis{
    int x;
    int y;
    public:
       void input();
       void out(dis a);
};
void dis::input(){
    cin>>x>>y;
    
}
void dis::out(dis a)
{
    cout<<"Distance between A("<<x<<","<<y<<") and B("<<a.x<<","<<a.y<<") : ";
    cout<< sqrt( ((x-a.x)*(x-a.x))+((y-a.y)*(y-a.y)) );
}
int main(){
    dis a,b;
    cout<<"Enter the value of x and y of point A : ";
    a.input();
    cout<<"Enter the value of x and y of point B : ";
    b.input();
    a.out(b);

    return 0;
}