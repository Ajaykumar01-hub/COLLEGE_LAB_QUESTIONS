#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {

    // VECTOR
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    // LIST
    list<int> l;
    l.push_back(5);
    l.push_back(15);
    l.push_back(25);

    cout << "\nList: ";
    for (int x : l)
        cout << x << " ";

    // MAP
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Mango";
    m[3] = "Banana";

    cout << "\nMap:\n";
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}