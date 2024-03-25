/*
try :- program statement that you want to monitor for exceptions are contained in a try block
throw :- if any exception occurs within the try block, it is thrown(using throw)
catch :- the exception is caught, using catch, and processed

try, catch should use together otherwise error will occur --> catch should be next to the try block
there can be multiple catch statement
if one catch is run, compiler will not check another catch statement 
if throw condition is executed, next statement of try block will not executed
*/

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=0;
    int c;

    try{
        if(b == 0){
            // throw 1;
            throw "not possible char";
        }
        c=a/b;
        cout<<"Output "<<c<<endl;
    }

    catch(int){
        cout<<"not possible integer";
        return 0;
    }

    catch(const char *a){
        cout<<a;
        return 0;
    }

    return 0;
}

//  -------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

double division(int a, int b) {
    if( b == 0 ) {
        throw "Division by zero condition!";
    }
    return (a/b);
}

int main (){

    int x = 50;
    int y = 0;
    double z = 0;

    try{
    z = division(x, y);
    cout <<z<< endl;
    }
    
    catch(const char* msg){
    cout<<msg<<endl;
    }

    return 0;
}