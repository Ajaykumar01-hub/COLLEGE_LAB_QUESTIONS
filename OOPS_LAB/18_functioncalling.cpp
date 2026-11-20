#include <iostream>
using namespace std;

class A {
public:
    int func(int x) { return x * 2; }
};

class B {
public:
    int func(int x) { return x * 3; }
};

class C {
public:
    int func(int x) { return x * 5; }
};

class D {
    int val = 1;

public:
    void update_val(int n) {
        A a;
        B b;
        C c;
        int x = 1, ca = 0, cb = 0, cc = 0;

        while (n % 2 == 0) {
            x = a.func(x);
            n /= 2;
            ca++;
        }

        while (n % 3 == 0) {
            x = b.func(x);
            n /= 3;
            cb++;
        }

        while (n % 5 == 0) {
            x = c.func(x);
            n /= 5;
            cc++;
        }

        val = x;

        cout << "A's func called " << ca << " times\n";
        cout << "B's func called " << cb << " times\n";
        cout << "C's func called " << cc << " times\n";
    }
};

int main() {
    D d;
    int n;
    cin >> n;
    d.update_val(n);
}