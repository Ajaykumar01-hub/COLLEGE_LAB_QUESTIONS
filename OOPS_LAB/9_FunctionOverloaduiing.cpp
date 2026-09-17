#include<iostream>
using namespace std;
class Area{
public:
    int calculate_Area(int side){
        return side*side;
    } 
    int calculate_Area(int length, int breadth){
        return length*breadth;
    }
    double calculate_Area(double base, double height){
    return 0.5*base*height;
    } 

};
int main(){
    Area a;
    cout<<"Area of square :"<<a.calculate_Area(5)<<endl;
    cout<<"Area of Rectangle :"<<a.calculate_Area(5,6)<<endl;
    cout<<"Area of Triangle :"<<a.calculate_Area(1,2)<<endl;
    return 0;
}