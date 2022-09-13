#include <string>
#include <iostream>

using namespace std;

class Date {
    public:
        Date (int _month, int _day, int _year)
        {
            month = _month;
            day = _day;
            year = _year;
        }

        void getDate (int _month, int _day, int _year){
            month = _month;
            day = _day;
            year = _year;
        
        }

        void setMonth (int _month){
            month = _month;
        }

        void setDay (int _day){
            day = _day;
        }
        void setYear (int _year){
            year = _year;
        }

        int getMonth (){
            return month;
        }

        int getDay () {
            return day;
        }

        int getYear () {
            return year;
        }

        int monthV(int _month){
            if (_month >= 1 && _month <= 12){
                month = _month;
            } else {month = 1;}
        }

        int displayDates() {
            cout << "Month: " << month << endl;
            cout << "Day: " << day << endl;
            cout << "Year: " << year << endl;
        }

    private:
        int month;
        int day;
        int year;
    
};
