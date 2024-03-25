/*
-a --> operator-() -T1 = T1.operator-()
++a --> operator++() [pre increment]
--a --> operator--()
a++ --> operator++(int) [post increment]
a-- --> operator++(int)
*/

// !--------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// class mayur{
//     int a, b, c;
//     public:
//         mayur(){
//             a = 45;
//             b = 87;
//             c = 2;
//         }
//         void display(){
//             cout<<a<<" "<<b<<" "<<c<<endl;
//         }
//         void operator-(){
//             cout<<"hello"<<endl;
//             a = -a;
//             b = -b;
//             c = -c;
//         }
// };

// int main(){

//     mayur a;
//     a.display();
//     -a;
//     a.display();
    
//     return 0;
// }

//! -------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class test{
    int a, b, c;
    public:
        test(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        test(){}

        void display(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }

        test operator++(){
            ++a;
            ++b;
            ++c;
            return *this;
        }

        test operator--(){
            --a;
            --b;
            --c;
            return *this;
        }

        test operator++(int){
            test temp = *this;
            a++;
            b++;
            c++;
            return temp;
        }

        test operator--(int){
            test temp = *this;
            a--;
            b--;
            c--;
            return temp;
        }

};

int main(){
    
    test t1(10, 20, 30), t2;
    t2 = t1++;
    t2.display();
    t1.display();

    return 0;
}

//! ---------------------------------------------------------------------------------------------
