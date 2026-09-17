#include<iostream>
using namespace std;
class Student{
private:
     int scores[5];
public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
    } 
    int calculatetotalsco(){
        int total=0;
        for(int i=0;i<5;i++){
            total=total+scores[i];
        }
        return total;
    }        

};
int main(){
    int n;
    cin>>n;
    Student students[100];
    for(int i=0;i<n;i++){
        students[i].input();
    }
    int annaScore=students[0].calculatetotalsco();
    int count=0;
    for(int i=1; i<n;i++){
        if(students[i].calculatetotalsco()>annaScore)
        count++;
    }
    cout<<count;
    return 0;
}