#include<iostream>
using namespace std;

// Search google or in photo gallary
// inline int product(int a, int b){
//     return a*b;
// }

int product(int a, int b){
    static int c = 0; // This executes only once
    // default static value will be '0' if we don't initialize the value of it
    c = c+1; // Next time this function is run, the value of c will be retained
    return a*b+c;
}

float intrest(int money, float factor = 1.04){
    // 'factor' is default arguments
    return money*factor;
}

int main(){
    
    int a,b;

    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money;
    cout<<"Enter the money "<<endl;
    cin>>money;

    cout<<"Total interest is "<<intrest(money)<<endl;
    cout<<"Total interest for VIP is "<<intrest(money, 2.2)<<endl;

    
    return 0;
}