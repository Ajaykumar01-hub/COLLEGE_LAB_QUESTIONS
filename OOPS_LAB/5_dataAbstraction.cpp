#include<iostream>
using namespace std;
class student{
private:
    string name;
    int marks;
public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Marks: ";
        cin>>marks;
    }        
    void display(){
        cout<<"NAME :"<<name<<endl;
        cout<<"MARKS :"<<marks;
    }
};
int main(){
   student s;
   s.input();
   s.display();
   return 0;
}
