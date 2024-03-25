// use where local variable and instance variable name is same.
#include<iostream>
using namespace std;

class A{
    int a; //instance variable
    public:
        void setData(int a /*local variable*/ ){
            this->a = a;
            // We can return value in 'this'
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){

    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}

// ! ---------------------------------------------------------------------------------------------------------

// #include <iostream>  
// #include<string>
// using namespace std;

// class Employee{  
//    public:  
//     int id;          
//     string name;    
//     float salary;  
//     Employee(int id, string name, float salary){    
//         this->id = id;    
//         this->name = name;    
//         this->salary = salary;   
//     }    
//     void display(){    
//             cout<<id<<"  "<<name<<"  "<<salary<<endl;    
//     }    
// };  

//     int main() {  
//     // Employee e1 =Employee(101, "ram", 89000); //creating an object of Employee   
//     // Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee    
//     Employee e1(102, "Nakul", 59000);

//     e1.display();    
//     // e2.display();    
//     return 0;
// }