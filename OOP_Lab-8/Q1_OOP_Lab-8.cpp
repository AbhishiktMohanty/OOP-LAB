//Q1. WAP to demonstrate all types of inheritance.

#include <iostream>
using namespace std;

class Base
{
public:
    void displayBase(){
        cout<<"\nBase Class Called."<<endl;
    }
};

//  Single inheritance
class Single : public Base
{
public:
    void displaySingle(){
        displayBase();
        cout<<"Single Inheritance Called."<<endl;
    }
};


//    Multi level inheritance
class MultiLevel : public Base
{
public:
    void displayMultiLevel(){
        displayBase();
        cout<<"Multi Level Inheritance Called."<<endl;
    }
};

// Multiple inheritance
class Multiple : public Base, public Single
{ 
public:
    void displayMultiple(){
        displaySingle();
        cout<<"Multiple Inheritance Called."<<endl;
    }
};

// Hierarchical inheritance
class Hierarchy1 : public Base {
public:
    void displayHierarchical1(){
        displayBase();
        cout<<"Hierarchical-1 Inheritance Called."<<endl;
    }
};

class Hierarchy2 : public Base {
public:
    void displayHierarchical2(){
        displayBase();
        cout<<"Hierarchical-2 Inheritance Called."<<endl;
    }
};

int main(){
    // Single inheritance
    Single s;
    s.displaySingle();

    // Multi level inheritance
    MultiLevel l;
    l.displayMultiLevel();

    // Multiple inheritance
    Multiple m;
    m.displayMultiple();

    // Hierarchical inheritance
    Hierarchy1 h1;
    Hierarchy2 h2;
    h1.displayHierarchical1();
    h2.displayHierarchical2();

    return 0;
}