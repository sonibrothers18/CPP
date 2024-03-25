#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
        test(int i, int j) : a(i), b(j)
        // test(int i, int j) : a(i), b(i+j)
        // test(int i, int j) : a(i), b(2*j)
        // test(int i, int j) : a(i), b(a+j)
        // test(int i, int j) : b(j), a(i+b) //--> not give desire output as "a" is decleared first in test class 
        {
            cout<<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    
    test a(3, 44);

    return 0;
}