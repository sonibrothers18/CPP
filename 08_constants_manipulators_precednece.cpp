#include<iostream>
#include<iomanip>
// Calling new header

using namespace std;
int main(){

    // Use of constant

    int a=5, b=781, c=2285;
    cout<<"The value of 'a' without setw is "<<a<<endl;
    cout<<"The value of 'b' without setw is "<<b<<endl;
    cout<<"The value of 'c' without setw is "<<c<<endl;

    // Use to aling 4 width towards right -->
    cout<<"The value of 'a' with setw is "<<setw(4)<<a<<endl;
    cout<<"The value of 'b' with setw is "<<setw(4)<<b<<endl;
    cout<<"The value of 'c' with setw is "<<setw(4)<<c<<endl;

    return 0;
}