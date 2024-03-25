#include<iostream>
using namespace std;

// Specail feature of function of C++
// Refer to video No 7
int swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
    return 0;
}

int main(){
    
    int x = 5;
    int y = 10;

    cout<<"Value of 'a' and 'b' before swap is "<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<"Value of 'a' and 'b' after swap is "<<x<<" "<<y<<endl;

    return 0;
}