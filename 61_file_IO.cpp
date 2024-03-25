// Pipe example in video for 'ofstream' and 'ifstream'
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream hout("61_01.txt");

    cout<<"Enter your name: ";
    string name;
    cin>>name;

    hout<<"My name is "+ name;
    
    hout.close(); // closing the link to file

    return 0;
}