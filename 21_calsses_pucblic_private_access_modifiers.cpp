#include<iostream>
using namespace std;

class employee{
    private:
        int a,b,c;
        // can be access by function only
    public:
        int d,e;
        void setData(int a1, int b2, int c3);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    
    employee mayur;
    mayur.setData(15,48,65);
    // mayur.a = 15; --> This will give error because "a" is private
    mayur.d = 587;
    mayur.e = 5875;
    mayur.getData();

    return 0;
}