#include <iostream>
using namespace std;
int main () {
   // declare simple variables
   int i = 5;
   double d =56.23;
 
   // declare reference variables
   int &r = i;
   double &s = d;

   i= 10;
   
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   cout << "Value of d : " << d << endl;
  cout << "Value of d reference : " << s  << endl;
   
   return 0;
}

// ! ------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;    

int c = 45;

int main()
{

    float d = 34.5;
    int a, b, c;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<"\n";
    // Use to print value of global variable c

    // Reference Variables -->
    // Rohan <--> Monty <--> Rohu <--> Coder
    // It is just like nickname
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // Type Casting -->
    float aa = 45.25;
    cout<<"The value of a is "<<int(aa);
    
    return 0;
}