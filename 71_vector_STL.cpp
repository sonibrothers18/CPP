// vector <data_Type> variable_Name;

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &x){
    for(int i=0; i<x.size();  i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> a;  // zero length vector of integer

    vector<char> b(4);  //  4-element char vector
    b.push_back('a');
    // display(b);

    vector<char> c(b);  
    // display(c);

    vector<int> d(6, 10);   // 6 element vector with all elements having value 10
    // display(d);



    int element;
    for(int i=0; i<5; i++){
        cout<<"Enter number "<<i+1<<" ";
        cin>>element;
        a.push_back(element);
    }
    display(a);

    a.pop_back();  //Removes the last element of the vector
    display(a);

    vector<int> :: iterator iter = a.begin() ;   //Creating an iterator pointing to the beginning of the vector
    a.insert(iter+2, 566);
    a.insert(iter+2, 5, 566);   // Inserts 5 times 566 at position iter + 2
    display(a);

    return 0;
}