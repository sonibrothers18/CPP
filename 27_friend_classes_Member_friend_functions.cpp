// #include <iostream>
// using namespace std;

// class GFG {
//     private:
// 	    int private_variable;
//     protected:
// 	    int protected_variable;
//     public:
//     	GFG(){
//     		private_variable = 10;
//     		protected_variable = 99;
//     	}
// 	friend class F;
// };

// class F {
//     int a = 100;
//     public:
//     	void display(GFG t){
//     		cout << "The value of Private Variable = "<< t.private_variable + a<< endl;
//     		cout << "The value of Protected Variable = "<< t.protected_variable;
//     	}
// };

// int main(){
  
// 	GFG g;
// 	F fri;
// 	fri.display(g);
// 	return 0;
// }

// ! --------------------------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// // Forward declaration
// class complex;

// class calculator{
//     public:
//         int add(int a, int b){
//             return (a+b);
//         }

//         int sumRealComplex(complex , complex);
//         int sumCompComplex(complex , complex);
// };

// class complex{
//     int a,b;

//     // Individually declaring function as a friend -->
//     // friend int calculator :: sumRealComplex(complex, complex);
//     // friend int calculator :: sumCompComplex(complex, complex);
    
//     // Declaring the entire calculator class as a friend -->
//     friend class calculator;

//     public:
//         void setNumber(int n1, int n2){
//             a = n1;
//             b = n2;
//         }

//         void printNumber(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int calculator :: sumRealComplex(complex o1, complex o2){
//     return (o1.a + o2.a);
// }

// int calculator :: sumCompComplex(complex o1, complex o2){
//     return (o1.b + o2.b);
// }

// int main(){
    
//     complex o1,o2;
//     o1.setNumber(1,4);
//     o2.setNumber(5,7);

//     calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout<<"The sum of real part of o1 and o2 is "<<res<<endl;

//     int rescomp = calc.sumCompComplex(o1, o2);
//     cout<<"The sum of complex part of o1 and o2 is "<<rescomp<<endl;

//     return 0;
// }

// !-------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class B;
class A{
	int a = 5;
	public:
		friend class B;
};

class B{
	int b = 4;
	public:
		void sum(A x){
			cout<<x.a + b;
		}
};

int main(){

	A a;
	B b;
	b.sum(a);
	
	return 0;
}