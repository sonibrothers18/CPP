#include<iostream>
#include<list>
using namespace std;

// ! List not support index method. So use iterator
// void display(list<int> &x){
//     for(int i=0; i<x.size(); i++){
//         cout<<x[i]<<" ";
//     }
// }

void display(list<int> &x){
    list<int> :: iterator iter;
    for(iter=x.begin(); iter!=x.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

// template <class T>
// void display(list<T> &x){
//     typename list<T>::iterator iter;    //! use typename in template
//     for(iter = x.begin(); iter != x.end(); iter++){
//         cout << *iter << " ";
//     }
//     cout<<endl;
// }

int main(){

    list<int> l1;   // list of 0 length
    list<int> l2(3);    // empty list of size 3

    l1.push_back(10);   // add element at the end
    l1.push_back(5);
    l1.push_back(15);
    l1.push_back(25);
    l1.push_back(20);
    l1.push_back(15);
    display(l1);

    l1.sort();
    display(l1);

    // l1.pop_front();
    // l1.pop_back();
    l1.remove(15);  // remove all the 15 from the list
    display(l1);
    cout<<"----------------------------------------------"<<endl;

    // ! if use this 0's will be there in front
    // l2.push_back(521);
    // l2.push_back(100);
    // l2.push_back(143);

    list<int> :: iterator iter2 = l2.begin();
    *iter2 = 521;
    iter2++;
    *iter2 = 100;
    iter2++;
    *iter2 = 143;
    iter2++;
    display(l2);
    
    l1.merge(l2);
    display(l1);

    l1.reverse();
    display(l1);

    return 0;
}