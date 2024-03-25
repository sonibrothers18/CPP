#include <iostream>
using namespace std;

int glo = 8;
// Global variable

void print()
{
    cout << glo;
}

int main()
{
    int a = 4;
    int b = 6;
    int glo = 15;
    // Local variable
    // Local variable have high precendency that's why 'glo' vlaue is changed

    cout << "This is Mayur Soni\n";
    cout << "The value of 'a' is " << a << ".\nThe value of 'b' is " << b << "\n";
    cout << "Value of glo of main " << glo << "\n";
    cout<<::glo<<endl; /*--> another method to access global variable*/
    cout << "Value of glo of function ";
    print();
    return 0;
}