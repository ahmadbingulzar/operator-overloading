#include <iostream>
using namespace std;
class Time
{

    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0)
    {
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    Time operator +(Time time_2)
    {
        seconds  += time_2.seconds;
        if (seconds > 59)
        {
            seconds -= 60;
            minutes++;
        }
        minutes += time_2.minutes;
        if (minutes > 59)
        {
            minutes -= 60;
            hours++;
        }
        hours += time_2.hours;
        return Time(hours,minutes,seconds);
    }
};
int main()
{
    Time obj_1(3, 3, 3);
    Time obj_2(2, 2, 2);
    Time obj_3;

    cout << "sum of " << endl;
    obj_1.display();
    obj_2.display();
    //obj_3.add_obj(obj_1, obj_2);
    obj_3=obj_1+obj_2;
    cout << "is = " << endl;
    obj_3.display();
    return 0;
}