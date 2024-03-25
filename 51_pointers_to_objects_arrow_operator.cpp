#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

        void getData(){
            cout<<"Real part is "<<real<<endl;
            cout<<"Imaginary part is "<<imaginary<<endl;
        }
};

int main(){
    
    complex a;
    complex *ptr = &a;
    (*ptr).setData(4, 8);
    ptr->getData();

    // Array of objects -->
    complex *ptr1 = new complex[4];
    ptr1->setData(5, 10);
    ptr1->getData();

    return 0;
}