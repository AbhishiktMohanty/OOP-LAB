/*Q3. Create a class which stores account number, customer name and balance. Derive two classes from 
'Account' class: "Savings' and "Current'. The 'Savings' class stores minimum balance. The 'Current' 
class stores the over-due amount. Include member functions in the appropriate class for
                -deposit money
                -withdraw [For saving account minimum balance should be checked.]
                          [For current account overdue amount should be calculated.]
                -display balance*/

#include<iostream>
#include<math.h>
using namespace std;

class account{
    string name;
    int accNo;
    double balance,withdw,depo;
    public:
    void getData(){
        cout<<"Enter the Details of the account:"<<endl;
        cout<<"Enter Account Number: ";
        cin>>accNo;
        cout<<"Enter Account Holder Name: ";
        cin>>name;
        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void display(){
        cout<<"Account Number: "<<accNo<<endl;
        cout<<"Account Holder Name: "<<name<<endl;
    }
    void getOtherData(){
        cout<<"Enter Deposit Amount: ";
        cin>>depo;
        cout<<"Enter Withdraw Amount: ";
        cin>>withdw;
    }
    int bal(){
        return balance;
    }
    int deposit(){
        return depo;
    }
    int withdraw(){
        return withdw;
    }

};

class savings:public account{
    double minBalance,calSav;
    public:
    void getSavingData(){
        cout<<"For Savings Account:"<<endl;
        getData();
        cout<<"Enter the Minimum Balance: ";
        cin>>minBalance;
        getOtherData();
        
    }
    void displaySavings(){
        calSav = bal() + deposit() - withdraw() - minBalance;
        cout<<"\n\nDetails of the Saving Account:"<<endl;
        display();
        if(calSav<0)
        cout<<"\n*Withdraw Declined*\nLow Balance/Balance will be below minimum balance."<<endl;
        else
        cout<<"The Final Balance in the account is "<<calSav+minBalance<<"/-"<<endl;;
    }
};

class current:public account{
    double overDue,calCur;
    public:
    void getCurrentData(){
        cout<<"For Current Account:"<<endl;
        getData();
        cout<<"Enter the Over-Due Balance: ";
        cin>>overDue;
        getOtherData();
        
    }
    void displayCurrent(){
        // calCur = bal() + deposit() - withdraw();
        cout<<"\n\nDetails of the Current Account:"<<endl;
        display();
        if(withdraw()>(overDue+bal()))
        cout<<"\n*Withdraw Declined*\nThe maximum amount that can be withdrawn is "<<overDue+bal()<<endl;
        else{
            calCur = (overDue + withdraw()) - (bal() + deposit());
            if(calCur>0)
            cout<<"The Over-Due Balance in the account is "<<calCur<<"/-"<<endl;
            else
            cout<<"The Balance in the account is "<<abs(calCur)<<"/-"<<endl;
        }
    }
};

int main(){
    int c;
    cout<<"1. Savings\n2. Current\nEnter your choice: ";
    cin>>c;
    switch (c)
    {
    case 1:{
        savings s;
        s.getSavingData();
        s.displaySavings();
        break;
    }
    case 2:{
        current c;
        c.getCurrentData();
        c.displayCurrent();
        break;
    }
    default:
        cout<<"Wrong Choice\nInput a valid Choice (1/2).";
        break;
    }
    
    return 0;
}



// #include <iostream>
// using namespace std;


// class Account{
//     protected:
//         int account_number;
//         string customer_name; 
//         double balance=0.0;
//     public:
//         void deposit(){
//             int amount;
//             cout<<"\nEnter amount to deposit: ";
//             cin>>amount;
//             balance=balance+amount;
//         }
        
// };


// class Savings: public Account{
//     private:
//         double min_balance=500;
    
//     public:    
//         void withdraw(){
//             int amount;
//             cout<<"\nEnter amount to withdraw: ";
//             cin>>amount;
//             if (amount<min_balance)
//                 cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
//             else
//                 balance=balance-amount;
//         }
//         void display(){
//             cout<<"\nBalance= "<<balance;
//         }
    
// };


// class Current: public Account{
//     private:
//         double over_due_amount=500000;
        
//     public:    
//         void withdraw(){
//             int amount;
//             cout<<"\nEnter amount to withdraw: ";
//             cin>>amount;
//             if (amount>over_due_amount)
//                 cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
//             else
//                 balance=balance-amount;
//         }
//         void display(){
//             cout<<"\nBalance= "<<balance;
//         }
        
// };


// int main()
// {
//     Account a;
//     a.deposit();
    
//     int c;
//     cout<<"1. Savings\n2. Current\nEnter your choice:";
//     cin>>c;
    
//     if (c==1){
//         Savings s;
//         s.withdraw();
//         s.display();
//     }
    
//     if (c==2){
//         Current c;
//         c.withdraw(); 
//         c.display();
//     }
    
//     return 0;
// }