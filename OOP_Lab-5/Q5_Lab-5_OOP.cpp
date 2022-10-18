//Q5. WAP to increment the value of an argument given to function.
//Done

#include<iostream>
using namespace std;
class incre{
    public:
    void increment(int x){
        int a;
        a=x+1;
        cout<<"The incremented value is ";
        cout<<a;
    }
};
int main(){
    incre ob;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    ob.increment(x);
}