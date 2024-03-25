/*
object + object
object + primitive
primitive + object 
*/

//! object + object
#include<iostream>
using namespace std;

class test{
    int a;
    public:
        test(int a){
            this->a = a;
        }

        test(){}

        void display(){
            cout<<a<<endl;
        }

        test operator+(test &k){
            cout<<"Additon is ";
            test temp;
            temp.a = a + k.a;
            return temp;
        }

        test operator-(test &k){
            cout<<"Subtraction is ";
            test temp;
            temp.a = a - k.a;
            return temp;
        }

        test operator*(test &k){
            cout<<"Multiplication is ";
            test temp;
            temp.a = a * k.a;
            return temp;
        }

        test operator/(test &k){
            cout<<"Division is ";
            test temp;
            temp.a = a / k.a;
            return temp;
        }

};

// test test :: operator+(test &k){} /*--> for defining outside the class*/

int main(){

    test t1(5), t2(10), t3;

    t3 = t1+t2;
    t3.display();

    t3 = t1-t2;
    t3.display();
    
    t3 = t1*t2;
    t3.display();
    
    t3 = t1/t2;
    t3.display();
    
    return 0;
}

// !------------------------------------------------------------------------------------------

//! object + primitive
// #include<iostream>
// using namespace std;

// class test{
//     int a;
//     public:
//         test(int a){
//             this->a = a;
//         }

//         test(){}

//         void display(){
//             cout<<a<<endl;
//         }

//         test operator+(int x){
//             test temp;
//             temp.a = a + x;
//             return temp;
//         }

// };

// int main(){

//     test t1(5), t2;

//     t2 = t1+10;
//     t2.display();
    
//     return 0;
// }

// !--------------------------------------------------------------------------------

// ! primitive + object
// #include<iostream>
// using namespace std;

// class test{
//     int a;
//     public:
//         test(int a){
//             this->a = a;
//         }

//         test(){}

//         void display(){
//             cout<<a<<endl;
//         }

//     friend test operator+(int k, test &y);
// };

// test operator+(int k, test &y){
//     test temp;
//     temp.a = k + y.a;
//     return temp;
// }

// int main(){

//     test t1(5), t2;

//     t2 = 10+t1;
//     t2.display();
    
//     return 0;
// }

// ! ---------------------------------------------------------------------------------

// ! string concatenation --> adding 2 strings
// #include<iostream>
// #include<string.h>
// using namespace std;

// class name{
//     char a[500];
//     public:
//         name(char a[]){
//             strcpy(this->a, a);
//         }

//         name(){}

//         void display(){
//             cout<<a<<endl;
//         }

//         name operator+(name &k){
//             name temp;
//             strcpy(temp.a, a);
//             strcat(temp.a, k.a);
//             return temp;
//         }

// };

// int main(){

//     name x("Mayur"), y("Soni"), z;
//     z = x+y;
//     z.display();

//     return 0;
// }