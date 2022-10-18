//Q5  Alll ok
#include<iostream>
using namespace std;

int main(){
    int i, mark[5];
    float sum=0, avg, perc;
    cout<<"Enter marks scored out of 100: \n";
    for(i=0; i<5; i++){
        cout<<"Enter the marks of subject-"<<i+1<<" :- ";
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/5;
    perc = (sum/500)*100;
    cout<<"\nAverage marks of the student is "<<avg;
    cout<<"\nPercentage of the student is "<<perc<<"%";
    cout<<endl;
    
    return 0;
}