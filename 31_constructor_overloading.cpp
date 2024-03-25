#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

        complex(){
            a = 45;
            b = 8;
        }

        complex(int x, int y){
            a = x;
            b = y;
        }

        complex(int x){
            a = x;
            b = 0;
        }

    void printnumber(){
        cout<<"Your number is "<< a <<" + "<< b <<" i "<<endl;
    }
};

int main(){

    complex a(50,10);
    a.printnumber();

    complex b(5);
    b.printnumber();
    
    complex c;
    c.printnumber();

    return 0;
}