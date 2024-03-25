// #include<iostream>
// using namespace std;

// class employee{
//     int id;
//     static int count;
//     // count value will be change in the different classes
//     // if we don't use this, than count value will start from initial in different classes and does not make any sense
//     // int count = 0;

//     public:
//         void setData(void){
//             cout<<"Enter the id"<<endl;
//             cin>>id;
//             count++;
//         }
//         void getData(void){
//             cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
//         }
//         static void getCount(void){
//             // Only static variable can be used in this, if we use another varible it will throw an error
//             // cout<<"The value of count is "<<count<<endl;
//         }
// };

// int employee :: count;
// // format for static variable declaring
// // Defaut value is 0

// // int employee :: count = 100;
// // Use to start the value of count from 100

// int main(){

//     employee harry, mayur, pratyush;
//     harry.setData();
//     harry.getData();
//     employee::getCount();

//     mayur.setData();
//     mayur.getData();
//     employee::getCount();

//     pratyush.setData();
//     pratyush.getData();
//     employee::getCount();
    
//     return 0;
// }

// !-------------------------------------------------------------------------

#include<iostream>
using namespace std;

class A{
    static int a;
    public:
        void inc(){
            cout<<a<<endl;
            a++;
        }
};

int A::a=1;

int main(){

   A x;
   A y;
   A z;

   x.inc();
   y.inc();
   z.inc();
    
    return 0;
}