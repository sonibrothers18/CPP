#include<iostream>
using namespace std;

int main(){

    float a = 7/2;
    cout<<a<<endl;
    // Answer will be in integer because after dividing, the value will go in float.
    // Both number are in interger so answer will in integer
    
    float b = 7.0/2;
    cout<<b<<endl;

    float c = float(7)/2;
    cout<<c<<endl;

    return 0;
}