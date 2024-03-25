#include<iostream>
using namespace std;

class bankDeposit{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

    public:
        bankDeposit(){}
        // If this is not present code will not run because we give arguments after getteing input from user.

        bankDeposit(int p, int y, float r);
        bankDeposit(int p, int y, int r);
        void show();
};

bankDeposit :: bankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    intrestRate = r;

    returnValue = principal;
    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}

bankDeposit :: bankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    intrestRate = float(r)/100;

    returnValue = principal;
    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}

void bankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<endl<<"Return value after "<<years<<" year is "<<returnValue<<endl;
}

int main(){
    
    bankDeposit a, b, c;
    int p, y;
    int R;
    float r;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    a = bankDeposit(p, y, r);
    a.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    b = bankDeposit(p, y, R);
    b.show();

    return 0;
}