#include<iostream>
using namespace std;

int swap(int,int);

int main()
{
    int a,b;
    cout<<"Enter first number: "; 
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    swap(a,b);
    
}

int swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"Swapped value of the above two  numbers is: "<<x<<", "<<y;
}