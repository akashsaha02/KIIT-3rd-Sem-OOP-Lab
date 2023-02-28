#include <iostream>
using namespace std;
class times
{
    int hours;
    int minutes;

public:
    void gettime(void)
    {
        cout << "Enter hour: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    void puttime(void)
    {
        cout << hours << " Hours and ";
        cout << minutes << " minutes" << endl;
    }
    void sum(times, times);
};
void times::sum(times t1, times t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes %= 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    times t1, t2, t3;

    t1.gettime();
    t2.gettime();

    t3.sum(t1, t2);

    cout << "T1= ";
    t1.puttime();

    cout << "T2= ";
    t2.puttime();

    cout << "T3= ";
    t3.puttime();
    return 0;
}