#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }

        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl<<endl;
        }
};
int main(){
    
    // int size = 3;
    // int x;
    // float y;
    // shop *a = new shop[size];

    // for(int i=0; i<size; i++){
    //     cout<<"Enter item ID and price:"<<endl;
    //     cin>>x>>y;
    //     a[i].setData(x, y);
    // }

    // for(int i=0; i<size; i++){
    //     a[i].getData();
    // }

    // -----------------------------------------------------------------------------

    // int size = 3;
    // int x;
    // float y;
    // shop *a = new shop[size];

    // for(int i=0; i<size; i++){
    //     cout<<"Enter item ID and price:"<<endl;
    //     cin>>x>>y;
    //     (a+i)->setData(x, y);
    // }

    // for(int i=0; i<size; i++){
    //     (a+i)->getData();
    // }

    // ------------------------------------------------------------------------------

    // int size = 3;
    // int x;
    // float y;
    // shop *a = new shop[size];
    // shop *shop_get = a;

    // for(int i=0; i<size; i++){
    //     cout<<"Enter item ID and price:"<<endl;
    //     cin>>x>>y;
    //     a->setData(x, y);
    //     a++;
    // }

    // for(int i=0; i<size; i++){
    //     shop_get->getData();
    //     shop_get++;
    // }

    return 0;
}