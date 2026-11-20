#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void get_data() {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    virtual void display_area() {
        cout << "Area";
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Area of rectangle = " << x * y << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Area of triangle = " << 0.5 * x * y << endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;

    cout << "Rectangle:\n";
    r.get_data();
    r.display_area();

    cout << "Triangle:\n";
    t.get_data();
    t.display_area();

    return 0;
}