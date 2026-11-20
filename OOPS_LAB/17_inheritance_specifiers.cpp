#include<iostream>
using namespace std;
class Base
{
private:
      int a;
protected:
      int b;
public:
      int c;
      Base()
      {
        a=10;
        b=15;
        c=16;
      }
      void display()
      {
        cout<<"Private a : "<<a<<endl;
        cout<<"Protected b : "<<b<<endl;
        cout<<"Public c : "<<c<<endl;
      }                 
};
class publicDerived : public Base{
public:
     void show(){
        // cout<<a; //not accessible
        cout<<"Protected b : "<<b<<endl;
        cout<<"Public c : "<<c<<endl;

     }    
};
class ProtectdDerived : protected Base{
public:
     void show(){
        cout<<"Protected b : "<<b<<endl;
        cout<<"Public c : "<<c<<endl;

     }    
};
class PrivateDerived : private Base{
public:
     void show(){
        cout<<"Protected b : "<<b<<endl;
        cout<<"Public c : "<<c<<endl;

     }    
};
int main(){
    publicDerived p;
    ProtectdDerived q;
    PrivateDerived r;
    cout<<"Public Inheritance : "<<endl;
    p.display();
    p.show();
    cout<<"Protected Inheritance : "<<endl;
    q.show();
    cout<<"Private Inheritance : "<<endl;
    r.show();
    return 0;
}