#include<iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;
public:
    void settime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    time add(time);
    void showtime();
};
time time::add(time TM)
{
    time t;
    t.minutes = minutes + TM.minutes;
    t.hours = t.minutes / 60;
    t.minutes = t.minutes % 60;
    t.hours += hours + TM.hours;
    return t;
}
void time::showtime()
{
    cout <<"("<< hours << " hours and " << minutes << " minutes)" << endl;
}
int main()
{
    time T1, T2, T3;
    int a,b,c,d;
    cout<<"Enter the time of First object: "<<endl<<"Hours: ";
	cin>>a;
    cout<<"Min:  ";
    cin>>b;
    cout<<"Enter the time of Second object: "<<endl<<"Hours: ";
	cin>>c;
    cout<<"Min:  ";
    cin>>d;
    T1.settime(a, b);
    T2.settime(c, d);
    T3 = T1.add(T2);
    cout <<"\n Time 1 : ";
    T1.showtime();
    cout << "\n Time 2 : ";
    T2.showtime();
    cout << "\n Time 3 : ";
    T3.showtime();
    return 0;
}
