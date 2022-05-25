// Programmed by Guillermo Esquivel - Sesion 02 Classes: Activity 4


#include <iostream>

using namespace std;

class Date {
    public:
        Date(int _day, int _month, int _year){
            day = _day;
            if(_month >= 1 || _month <= 12){
                month = _month;
            } else {
                month = 1;
            }
            year = _year;
        }
        void setDay(int _day){ day = _day; }
        int getDay(){ return day; }
        void setMonth(int _month){ month = _month; }
        int getMonth(){ return month; }
        void setYear(int _year){ year = _year; }
        int getYear(){ return year; }
        int getDate(){ 
            cout << day << "/" << month << "/" << year << endl;
        }

    private:
        int day, month, year;
};




int main(){
    Date date1(14,03,2003);
    
    cout << date1.getDay() << endl;
    cout << date1.getMonth() << endl;
    cout << date1.getYear() << endl;

    date1.getDate();

    return 0;
} 