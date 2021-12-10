#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time()
    {
        hr = min = sec = 0;
    }
    void enter_time()
    {   
        cout<<"Enter the time \n";
        cout << "hr : ";
        cin >> hr;
        cout << "min : ";
        cin >> min;
        cout << "sec : ";
        cin >> sec;
    }

    
    void add_time(Time t1, Time t2)
    {
        int carry = 0;
        sec = t1.sec + t2.sec;
        if (sec >= 60)
        {
            carry = (sec) / 60;
            sec = (sec) % 60;
        }
        else
          carry = 0;
        min = t1.min + t2.min + carry;
        if (min >= 60)
        {
            carry = (min) / 60;
            min = (min) % 60;
        }
        else
          carry = 0;
        hr = t1.hr + t2.hr + carry;
        if (hr >= 12)
        {
            hr = (hr) % 12;
        }
    }
    void display()
    {

        cout << "TIme is : " << hr << " : " << min << " : " << sec << endl;
    }
};
int main()
{
    cout<<"ANSHIKA MEHTA,Univ Roll.no-2018188,Section-G"<<endl;
    Time t1, t2, res;
    t1.enter_time();
    t2.enter_time();
    cout<<"Time T1 : ";
    t1.display();
    cout<<"Time T2 : ";
    t2.display();
    cout<<"After the Adding Time\n";
    res.add_time(t1, t2);
    res.display();
    return 0;
}