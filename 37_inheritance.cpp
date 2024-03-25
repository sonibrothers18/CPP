#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id=inpId;
            salary=34.5;
        }
        Employee(){}
};

// Derived Class syntax -->
// class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
// {
//     class members/methods/etc
// }

// ! Default visibility mode is private
// ! Private members are never inherited
// ! Public Visibility Mode:- Public members of the base class becomoes Public members of the derived class
// ! Private Visibility Mode:- Public members of the base class becomoes Private members of the derived class

// Creating a Programmer class derived from Employee Base class -->
// class Programmer : public Employee{
class Programmer : Employee{
    public:
        int languageCode = 9;
        Programmer(int inpId){
            id=inpId;
        }
        void getData(){
            cout<<id<<endl;
        }

        void gsalary(){
            salary = 987;
            cout<<salary;
        }
};

int main(){

    Employee harry(1), mayur(2);
    cout<<harry.salary<<endl;
    cout<<mayur.salary<<endl;

    Programmer skill(8);
    cout<<skill.languageCode<<endl;
    skill.getData();
    skill.gsalary();
    
    return 0;
}