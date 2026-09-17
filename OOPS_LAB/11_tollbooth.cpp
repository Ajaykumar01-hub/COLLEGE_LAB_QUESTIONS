#include<iostream>
using namespace std;
class Tollbooth{
private:
     unsigned int totalcars;
     double totalcash;
public:
    //constructor
     Tollbooth()
     {
        totalcars=0;
        totalcash=0;
     }
     // function for paying cars
     void payingcar()
     {
        totalcars++;
        totalcash=totalcash+0.5;
     }
     //function for non paying cars
     void nonpayingcars()
     {
        totalcars++;
     } 
     //display total
     void display(){
        cout<<"\ntotal Cars: "<<totalcars<<endl;
        cout<<"\ntotal Cash: "<<totalcash<<endl;
     }  
         

};
int main(){
    Tollbooth booth;
    char ch;
    cout<<"Toll Booth program\n";
    cout<<"Press P for paying cars\n";
    cout<<"Press N for non-paying cars\n";
    cout<<"Press Q to Exit \n";
    while(true){
        cin>>ch;
        if(ch=='P'||ch=='p'){
            booth.payingcar();
            cout<<"Paying Car counted :\n";
        }else if(ch=='N'||ch=='n'){
            booth.nonpayingcars();
            cout<<"Non Paying Car\n";
        }
        else if (ch == 'Q' || ch == 'q')
        {
            booth.display();
            break;
        }
    }
}   

        
    
    
