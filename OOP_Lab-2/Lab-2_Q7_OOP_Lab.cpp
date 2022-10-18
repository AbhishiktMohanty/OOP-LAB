//Q7 All ok
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int givenSecs,hours,mins,secs;
    cout<<"Enter time in seconds: ";
    cin>>givenSecs;
    hours = givenSecs/3600;
    secs = givenSecs%3600;
    mins = secs/60;
    secs = secs%60;
    cout<<givenSecs<<" seconds in hours mins and secs is "<<hours<<" hours "<<mins<<" mins "<<secs<<" secs.";
    
    return 0;
}