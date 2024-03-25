#include<iostream>
using namespace std;

template <class T1=int, class T2=float>
class Mayur{
    public:
        T1 a;
        T2 b;
        Mayur(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){

    Mayur <> h(5, 1.5);
    h.display();
    cout<<endl;
    
    Mayur <char, int> a('M', 15);
    a.display();

    return 0;
}