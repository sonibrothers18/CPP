#include<iostream>
using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}

int fibo(int a){
    if(a<2){
        return 1;
    }
    else{
        return fibo(a-2) + fibo(a-1);
    }
}

int main(){
    
    int x;
    cout<<"Enter your number ";
    cin>>x;

    // cout<<"Factorial of "<<x<<" is "<<factorial(x); 

    cout<<"Value of fibbonaci at this number is "<<fibo(x);

    return 0;
}