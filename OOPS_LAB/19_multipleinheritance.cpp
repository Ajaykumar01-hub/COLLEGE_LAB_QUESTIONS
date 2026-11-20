
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int age, enroll_no, marks;
    string name;

    void display() {
        cout << "Student Details\n";
        cout << name << " " << age << " "
             << enroll_no << " " << marks << endl;
    }
};

class Faculty {
public:
    string facultyName, dept, gender;
    int facultyCode, salary, age, experience;

    void display() {
        cout << "Faculty Details\n";
        cout << facultyName << " " << facultyCode
             << " " << salary << " " << dept
             << " " << age << " " << experience
             << " " << gender << endl;
    }
};

class Person : public Student, public Faculty {
public:
    void show() {
        Student::display();
        Faculty::display();
    }
};

int main() {
    Person p;

    p.name = "Rahul";
    p.Student::age = 20;
    p.enroll_no = 101;
    p.marks = 85;

    p.facultyName = "Amit";
    p.facultyCode = 201;
    p.salary = 40000;
    p.dept = "CSE";
    p.Faculty::age = 35;
    p.experience = 10;
    p.gender = "Male";

    p.show();

    return 0;
}
