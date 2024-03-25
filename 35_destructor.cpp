#include<iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value

int count = 0;
// Global Variable

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructur is called for object number "<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
     
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {
        cout<<"Enter this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"Back to main"<<endl;

    return 0;
}

// ! --------------------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class A{
//     int a, b;
//     public:
//         A(){
//             a=5;
//             b=4;
//         }

//         ~A(){
//             cout<<a+b<<endl;
//         }
// };

// int main(){

//     A a;
    
//     return 0;
// }