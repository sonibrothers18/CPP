#include<iostream>
using namespace std;

class simple{
    int data1, data2;
    
    public:
        simple(int a, int b=9){
            data1 = a;
            data2 = b;
        }

        void printData();
};

void simple :: printData(){
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}

int main(){
    
    // simple a(5, 8);
    simple a(5);
    a.printData();

    return 0;
}