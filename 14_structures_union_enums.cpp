#include<iostream>
using namespace std;

// struct employee{
//     int id;
//     char alpha;
//     float salary;
// };

typedef struct employee{
    int id;
    char alpha;
    float salary;
} ep;
// Use for shortcut the structure name
// In C++ no need to declare 'typedef'

// Unions -->
union pay{
    int cash;
    float gpay;
    char check;
};
    


int main(){
    
    // ENUMS LEFT

    ep mayur;
    mayur.id = 45;
    mayur.alpha = 'm';
    mayur.salary = 1500.24;

    cout<<"The value is "<<mayur.id<<endl;
    cout<<"The value is "<<mayur.alpha<<endl;
    cout<<"The value is "<<mayur.salary<<endl;

    return 0;
}   