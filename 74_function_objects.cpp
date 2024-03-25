#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

void display(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {12,452,5,32,16,5,1};
    display(arr, 7);

    // sort(arr, arr+7);
    sort(arr, arr+7, greater<int>());   // sort in reverse
    display(arr, 7);

    return 0;
}