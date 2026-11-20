// operator overloading using friend functions
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
    friend void operator-(Number &n);
    friend void operator++(Number &n);
    friend void operator++(Number &n,int);
    friend void operator--(Number &n);
    friend void operator--(Number &n,int);
    void display()
    {
        cout<<"VALUE : "<<x<<endl;
    }


};
    void operator-(Number &n)
    {
        n.x=-n.x;
    }
    void operator++(Number &n)
    {
        ++n.x;
    }
    void operator++(Number &n,int)
    {
        n.x++;
    }
    void operator--(Number &n)
    {
        --n.x;
    }
    void operator--(Number &n,int)
    {
        n.x--;
    }

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