#include <iostream>
using namespace std;

int main()
{

    cout<<"Welcome to Operators"<<endl;
    // 'endl' is use to print new line

    int a=4, b=5;

    // Arithematic Operators -->
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> Use to assign values to varibles
    int c = 3;
    float d = 4.5;
    char e = 'e';

    // Comparison Operators -->
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators -->
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b)) is "<<(!(a==b))<<endl;
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;

    return 0;
}