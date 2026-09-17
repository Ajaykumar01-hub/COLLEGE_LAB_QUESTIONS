#include<iostream>
using namespace std;
class Bank{
private:
    string name;
    int account_number;
    string acount_type;
    double balance;
public:
    void input(){
        cout<<"enter name :";
        cin>>name;
        cout<<"enter account number :";
        cin>>account_number;
        cout<<"Enter account type :";
        cin>>acount_type;
        cout<<"enter balance :";
        cin>>balance;
    }
    void deposit(){
        double amount;
        cout<<"enter amount you want to deposit :";
        cin>>amount;
        balance=balance+amount;
    }
    void withdraw(){
        double amount;
        cout<<"enter amount you want to withdraw :";
        cin>>amount;
        if(balance>=amount){
            balance=balance-amount;
        }else{
            cout<<"insuficient balance :";
        }
    }
    void display(){
        cout<<"\nNAME : "<<name;
        cout<<"\nBALANCE : "<<balance;
    }
};
int main(){
    Bank b1;
    b1.input();
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}