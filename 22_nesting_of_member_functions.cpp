#include<iostream>
#include<string.h>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void change(void);
        void print(void);
};

void binary :: read(void){
    cout<<"Enter a binary number ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: change(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
void binary :: print(void){
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    
    binary b;
    b.read();
    b.chk_bin();
    b.print();
    b.change();
    b.print();

    return 0;
}