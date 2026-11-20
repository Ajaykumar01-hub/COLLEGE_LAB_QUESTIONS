#include <iostream>
using namespace std;

class CAL_AREA {
protected:
    float r, h;

public:
    void getdata() {
        cout << "Enter radius and height: ";
        cin >> r >> h;
    }

    virtual void display_volume() = 0;
};

class Cone : public CAL_AREA {
public:
    void display_volume() {
        cout << "Volume of cone = "
             << (1.0 / 3) * 3.14 * r * r * h << endl;
    }
};

class Hemisphere : public CAL_AREA {
public:
    void display_volume() {
        cout << "Volume of hemisphere = "
             << (2.0 / 3) * 3.14 * r * r * r << endl;
    }
};

class Cylinder : public CAL_AREA {
public:
    void display_volume() {
        cout << "Volume of cylinder = "
             << 3.14 * r * r * h << endl;
    }
};

int main() {
    Cone c;
    Hemisphere h;
    Cylinder cy;

    cout << "Cone:\n";
    c.getdata();
    c.display_volume();

    cout << "Hemisphere:\n";
    h.getdata();
    h.display_volume();

    cout << "Cylinder:\n";
    cy.getdata();
    cy.display_volume();

    return 0;
}