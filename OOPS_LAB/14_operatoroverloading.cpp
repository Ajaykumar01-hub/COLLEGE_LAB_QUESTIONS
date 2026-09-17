#include <iostream>
using namespace std;
class Complex
{
    int real, img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    // + operator
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    // - operator
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    // == operator
    bool operator==(Complex c)
    {
        return (real == c.real && img == c.img);
    }
    void display()
    {
        cout << real;
        if (img >= 0)
            cout << " + " << img << "i";
        else
            cout << " - " << -img << "i";
        cout << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 1);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    cout << "First Complex Number = ";
    c1.display();
    cout << "Second Complex Number = ";
    c2.display();
    cout << "Addition = ";
    c3.display();
    cout << "Subtraction = ";
    c4.display();
    if (c1 == c2)
        cout << "Both are equal";
    else
        cout << "Both are not equal";
    return 0;
}