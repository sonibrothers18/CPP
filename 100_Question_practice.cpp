// ! Write a template function that finds the maximum element in an array of any data type. Test the function with arrays containing integers, doubles, in c++.

#include<iostream>
using namespace std;

template<class T>
void maximum(T arr[], int size){
    T max = arr[0];
    // for(int i=1; (arr[i]!=NULL); i++){
    for(int i=1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum number is "<<max<<endl;
}


int main(){

    int a[] = {45,2,4,83,4,27,8,1,330,102};
    int aSize = sizeof(a)/sizeof(a[0]);
    maximum(a, aSize);

    float b[] = {45.3, 4.2, 6, 2, 5.89, 1, 5.3, 4.2, 3};
    int bSize = sizeof(b)/sizeof(b[0]);
    maximum(b, bSize);
    
    return 0;
}