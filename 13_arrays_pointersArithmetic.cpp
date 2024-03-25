#include<iostream>
using namespace std;

int main(){
    
    int marks[] = {15,547,3,151};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int *p = marks;
    // No need of '& sign' in arrays while using pointer
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<endl;
    
    cout<<"The value of marks[0] is "<<*(p++)<<endl;
    cout<<"The value of marks[1] is "<<*(p++)<<endl;
    cout<<"The value of marks[2] is "<<*(p++)<<endl;
    cout<<"The value of marks[3] is "<<*(p)<<endl;
    return 0;
}