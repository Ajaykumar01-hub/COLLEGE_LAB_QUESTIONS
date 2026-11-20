#include<iostream>
using namespace std;
class Number
{
    int x;
public:
    Number(int a)
    {
        x=a;
    }
    void operator-()
    {
        x=-x;
    }
    void operator++()
    {
        ++x;
    }
    void operator++(int)
    {
        x++;
    }    
    void operator--()
    {
        --x;
    }
    void operator--(int)
    {
        x--;
    } 
    void display()
    {
        cout<<"VALUE : "<<x<<endl;
    }   
};
int main()
{
    Number n(5);
    -n;
    n.display();
    ++n;
    n.display();
    n++;
    n.display();
    --n;
    n.display();
    n--;
    n.display();
    return 0;

}