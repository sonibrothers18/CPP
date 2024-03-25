#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    // complex(void);

    complex(int x, int y);

    void printnumber(){
        cout<<"Your number is "<< a <<" + "<< b <<" i "<<endl;
    }

};

// This is default constructor because no arguments are given in it
// complex :: complex(void){
//     a = 10;
//     b = 0;
// }

// This is Parameterized constructor because arguments are given in it
complex :: complex(int x, int y){
    a = x;
    b = y;
}

int main(){

    // Implicit call
    complex a(4, 6);
    a.printnumber();
    
    return 0;
}