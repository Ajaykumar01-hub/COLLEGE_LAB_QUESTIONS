#include <iostream>
#include <list>
using namespace std;

template <class T>
class MyList {
    list<T> l;

public:
    void insert(T x) {
        l.push_back(x);
    }

    void remove(T x) {
        l.remove(x);
    }

    void display() {
        for (T x : l)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    MyList<int> a;

    a.insert(10);
    a.insert(20);
    a.insert(30);

    cout << "List: ";
    a.display();

    a.remove(20);

    cout << "After deletion: ";
    a.display();

    return 0;
}