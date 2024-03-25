#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a = 0;
        }

        number(int num){
            a = num;
        }

        // When no copy constructor is found, compiler supplies its own copy constructor automatically
        // number(number &obj){
        //     cout<<"Copy constructor is called"<<endl;
        //     a = obj.a;
        // }

        number(number &obj){
            cout<<"Copy constructor is called"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};

int main(){
    
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    
    number z1(z);
    // Copy constructor is called
    z1.display();

    number z3 = z;
    z3.display();
    // Copy constructor is called

    // z2 = z;
    // Copy constructor not called

    return 0;
}