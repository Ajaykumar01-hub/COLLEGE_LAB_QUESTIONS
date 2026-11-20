#include <iostream>
using namespace std;

class A {
public:
    int x;

    void get() {
        cout << "Enter value: ";
        cin >> x;
    }

    void show() {
        cout << "Value = " << x;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.get();
    obj.show();

    return 0;
}