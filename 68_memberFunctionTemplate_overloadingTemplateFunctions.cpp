#include<iostream>
using namespace std;

template <class T>
class Mayur{
    public:
        T data;
        Mayur(T a){
            data = a;
        }
        void display();
};

template <class T>
void Mayur<T> :: display(){
    cout<<data<<endl;
}

int main(){

    Mayur<float> a(5.2);
    a.display();

    Mayur<char> b('m');
    b.display();
        
    return 0;
}

// ! If template function and normal function is same(overloading) than the excat match will run.