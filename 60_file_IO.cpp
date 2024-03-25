#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    string st = "Mayur Soni";
    string st2;

    // Opening files using constructor and writing it
    ofstream ou("60_01.txt");
    ou<<st;

    // Opening files using constructor and reading it
    ifstream in("60_02.txt");
    // in>>st2;
    getline(in, st2); // Use to print whole line

    cout<<st2;

    return 0;
}