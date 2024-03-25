// 'Function Overloading' means using function with same name but with different arguments
 
#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"2 Arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"3 Arguments"<<endl;
    return a+b+c;
}

int main(){
    
    cout<<"Sum of "<<sum(5,5)<<endl;
    cout<<"Sum of "<<sum(5,5,5)<<endl;
    // AutoMatically identfy the function according to the number of arguments

    return 0;
}