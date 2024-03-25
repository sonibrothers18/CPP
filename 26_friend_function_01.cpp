// #include<iostream>
// using namespace std;

// class Value{
//     int a, b;
//     public:
//         void getValue(int x, int y){
//             a = x;
//             b = y;
//         }
//         friend void sum(Value a);
// };

// void sum(Value a){
//     cout<<"Sum is "<< a.a + a.b <<endl;
// }

// int main(){

//     Value mayur;
//     mayur.getValue(5, 4);
//     sum(mayur);
    
//     return 0;

// }

// !---------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Value{
    int a, b;
    public:
        void getValue(int a, int b){
            this->a = a;
            this->b = b;
        }
        friend void sum(Value a);
};

void sum(Value a){
    cout<<"Sum is "<< a.a + a.b <<endl;
}

int main(){

    Value mayur;
    mayur.getValue(5, 4);
    sum(mayur);
    
    return 0;
}