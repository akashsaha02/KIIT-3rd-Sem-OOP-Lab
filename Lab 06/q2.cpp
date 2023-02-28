#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void get_no(int a)
    {
        roll = a;
    }
    void put_no()
    {
        cout << "Roll :" << roll << endl;
        
    }
};
class test : virtual public student
{
protected:
    float p1, p2;

public:
    void get_marks(float x, float y)
    {
        p1 = x;
        p2 = y;
    }
    void put_marks()
    {
        cout << "marks obtained : "
             << "\n"
             << "part 1" << p1 << "\n"
             << "part 2 " << p2 << "\n"
             << endl;
    }
};
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "sports wt:" << score << "\n\n";
    }
};

class result : public test, public sports
{
    float total;

public:
    void display();
};

void result ::display()
{
    total = p1 + p2 + score;
    put_no();
    put_marks();
    put_score();

    cout << "\nTotal score :" << total << endl;
}
int main()
{
    result student_1;
    student_1.get_no(798);
    student_1.get_marks(30.5, 25.5);
    student_1.get_score(7.0);
    student_1.display();
    return 0;
}