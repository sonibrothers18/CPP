#include<iostream>
using namespace std;

// void average(float x, float y){
//     float a = (x+y)/2;
//     cout<<a<<endl;
// }

template <class T1, class T2>
void average(T1 x, T2 y){
    float a = (x+y)/2.0;
    cout<<a<<endl;
}

int main(){

    average(5, 4);
    
    return 0;
}