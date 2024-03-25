#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    // Selection control structure: if else-if else ladder -->
    // if(age<18){
    //     cout<<"You cannot drive"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You can drive"<<endl;
    // }
    // else{
    //     cout<<"You can sleep"<<endl;
    // }

    // Selection control structure: switch case structure -->
    switch (age)
    {
    case 18:
        cout<<"You can drive";
        break;
    
    default:
        cout<<"You can not drive";
        break;
    }
    return 0;
}