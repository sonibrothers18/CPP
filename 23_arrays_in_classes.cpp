#include<iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter = 0;
        }
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter]; 
    counter ++;
}

void shop :: displayPrice(void){
    for(int i = 0; i < counter; i++){
        cout<<"The Price of item with Id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){

    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();
    
    return 0;
}