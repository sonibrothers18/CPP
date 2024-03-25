/*
For each integer n in the inclusive interval [a,b]:
If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd"
Input: 8
       11
Output: eight
        nine
        even
        odd
*/

#include<iostream>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    for(int x=a; x<=b; x++){
        if(x==1)
            cout<<"one"<<endl;
        if(x==2)
            cout<<"two"<<endl;
        if(x==3)
            cout<<"three"<<endl;
        if(x==4)
            cout<<"four"<<endl;
        if(x==5)
            cout<<"five"<<endl;
        if(x==6)
            cout<<"six"<<endl;
        if(x==7)
            cout<<"seven"<<endl;
        if(x==8)
            cout<<"eight"<<endl;
        if(x==9)
            cout<<"nine"<<endl;
        if(x>9){
            if(x%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }

    }
    
    return 0;
}