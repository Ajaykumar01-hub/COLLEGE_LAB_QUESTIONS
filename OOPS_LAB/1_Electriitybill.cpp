#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string name;
    int units;
    float bill;
    cout << "Enter the users: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Consumer Name: ";// if i am use getline than i use cin.ignore(); because of input buffer1
        cin>>name;
        cout << "Enter Units Consumed: ";
        cin >> units;
        if (units <= 100)
            bill = units * 0.60;
        else if (units <= 300)
            bill = (100*0.60) + (units - 100)*0.80;
        else
            bill = (100 * 0.60) + (200 * 0.80) + (units - 300) * 0.90;
            // minimum charge
        if (bill<50)
            bill=50;
            // 15% sucharge
        if (bill>300)
            bill = bill + bill * 0.15;
        cout <<name<< " Rs. " <<bill << endl;
    }

    return 0;
}