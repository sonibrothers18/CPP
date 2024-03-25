#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    // Constructor declaration -->
    complex(void);
    // This is a defaut constructor because does not take any arguments

    void printnumber(){
        cout<<"Your number is "<< a <<" + "<< b <<" i "<<endl;
    }

};

// constructor does not have any return type.
complex :: complex(void){
    a = 10;
    b = 0;
    cout<<"Mayur"<<endl;
}
int main(){

    complex c,d,e;
    c.printnumber();
    d.printnumber();
    e.printnumber();
    
    return 0;
}