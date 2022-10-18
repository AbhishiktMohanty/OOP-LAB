//Q6 All ok
#include <iostream>
using namespace std;

int main(){
	int totalPaisa,rupees,paisa;
	cout<<"Enter Total Paisa: ";
	cin>>totalPaisa;
	rupees = totalPaisa/100;
	paisa = totalPaisa%100;
	cout<<"Total Paisa = "<<totalPaisa<<endl;
	cout<<totalPaisa<<" Paisa into its equivalent is "<<rupees<<" Rupees and "<<paisa<<" Paisa."<<endl;
    return 0;
}