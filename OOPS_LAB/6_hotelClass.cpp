#include<iostream>
#include<string>
using namespace std;
class Hotel{
private:    
   int Rno;
   string name;
   float tariff;
   int Nod;
   float CAL(){
    float amount=Nod*tariff;
    if(amount>10000)
    amount=1.05*amount;
    return amount;
   }
public:
   void Checkin(){
    cout<<"Enter Room Number: ";
    cin>>Rno;
    cout<<"Enter Customer Name: ";
    cin>>name;
    cout<<"enter tariff per pay: ";
    cin>>tariff;
    cout<<"Enter Number of Days: ";
    cin>>Nod;
   }
   void Checkout()
   {
    cout<<"\nRoom Number: "<<Rno;
    cout<<"\nCustomer Name: "<<name;
    cout<<"\nTariff : "<<tariff;
    cout<<"\nNumber of Days : "<<Nod;
    cout<<"\nToatal amount : "<<CAL();
   }
};
int main(){
    Hotel h;
    h.Checkin();
    h.Checkout();
    return 0;
}