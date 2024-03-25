// ! dynamic memory allocation is always allocated for pointer variable only
// int *arr = new int [50];
// datatype pointer_Variable = new datatype[size];
// delete arr;

#include<iostream>
using namespace std;

class Test{
    int *arr,n;
    public:
        Test(int m){
            n = m;
            arr = new int[n];
        }

        void setData(){
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
        }

        void getData(){
            for(int i=0; i<n; i++){
                cout<<arr[i]<<endl;
            }
        }

        ~Test(){
            delete arr;
            cout<<"Array deleted"<<endl;
        }
};

int main(){

    Test a(5);
    a.setData();
    a.getData();

    cout<<"THE END"<<endl;
    
    return 0;
}