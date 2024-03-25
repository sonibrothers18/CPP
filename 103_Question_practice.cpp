/*
Create a class called Time to represent hours and mins. Overload the addition (+) operators to perform the adding operations on two object of Time Class.   The class should have two private data members representing the hours and minutes parts of the Time format. Ensure that the operators are properly overloaded to handle addition for objects of the Time class.
Test your implementation by creating two Time objects, performing addition operations, and displaying the results
*/

#include<iostream>
using namespace std;

class Time{
    int hour;
    int minute;
    public:
        Time(int hour, int minute){
            this->hour = hour;
            this->minute = minute;
        }

        Time(){}

        void display(){
            cout<<hour<<" Hr : "<<minute<<" min"<<endl;
        }

        Time operator+(Time &k){
            Time temp;
            temp.hour = hour + k.hour;
            temp.minute = minute + k.minute;
            return temp;
        }

};

int main(){

    Time india(12, 45), usa(5, 12), sumTime;
    sumTime = india+usa;
    sumTime.display();
    
    return 0;
}