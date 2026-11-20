
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {

    // VECTOR
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.insert(v.begin(), 5);  // Insert element
    v.insert(v.begin()+1, 15); // Insert at position
    v.pop_back();            // Delete last element

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    cout << "\nVector size: " << v.size();


    // LIST
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    l.push_front(5);  // Insert at beginning
    l.pop_back();     // Delete last element

    cout << "\n\nList: ";
    for (int x : l)
        cout << x << " ";


    // MAP
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Mango";
    m[3] = "Banana";
    m[3] = "Banana";

    m[4] = "Orange";  // Insert element
    m.erase(2);       // Delete key 2
    if (m.find(3) != m.end())
    cout << "Found";      // Search key

    cout << "\n\nMap:\n";
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}
