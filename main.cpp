#include<iostream>
using namespace std;

class Clock{
    public:
        int hours, minutes;

    void add_hours(int h){
        this->hours+=h;
        if(this->hours>=24){
            this->hours%=24;
        }
    }
    void add_minutes(int m){
        this->minutes+=m;
        if(this->minutes>=60){
            this->add_hours(this->minutes/60);
            this->minutes%=60;
            
        }
    }

};

int main(){
    Clock clock;
    string time;
    int hours, minutes;

    cin>>time;

    hours = (time[0]-48)*10 + time[1] -48;
    minutes = (time[3]-48)*10 + time[4] -48;
    clock.hours = hours;
    clock.minutes=minutes;

    if(clock.hours < 10 && clock.minutes < 10){
        cout << '0' << clock.hours << ":" << '0' << clock.minutes << endl;
    }else if(clock.minutes < 10){
        cout << clock.hours << ":" << '0' << clock.minutes << endl;
    }else if(clock.hours < 10){
        cout << '0' << clock.hours << ":" << clock.minutes << endl;
    }else{
        cout << clock.hours << ":" << clock.minutes << endl;
    }
    
    while(cin >> minutes){
        clock.add_minutes(minutes);
        if(clock.hours < 10 && clock.minutes < 10){
            cout << '0' << clock.hours << ":" << '0' << clock.minutes << endl;
        }else if(clock.minutes < 10){
            cout << clock.hours << ":" << '0' << clock.minutes << endl;
        }else if(clock.hours < 10){
            cout << '0' << clock.hours << ":" << clock.minutes << endl;
        }else{
            cout << clock.hours << ":" << clock.minutes << endl;
        }
    }
}