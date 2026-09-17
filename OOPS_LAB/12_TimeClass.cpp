#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
    int hours, minutes, seconds;
public:
    // Default constructor
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
   // Parameterized constructor
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {        
            cout << setfill('0')
             << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }

        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
    }
};

int main()
{
    Time t1(5, 30, 40);
    Time t2(6, 28, 30);
    Time t3;
    t3.add(t1, t2);
    cout << "Time 1 = ";
    t1.display();
    cout << "Time 2 = ";
    t2.display();
    cout << "Added Time = ";
    t3.display();
    return 0;
}