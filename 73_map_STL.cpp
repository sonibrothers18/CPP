#include<iostream>
#include<map>
#include<string>
using namespace std;

void display(map<string, int> &a){
    map<string, int> :: iterator iter;
    for(iter=a.begin(); iter!=a.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
}

int main(){

    map<string, int> marksMap;
    marksMap["mayur"] = 100;
    marksMap["alex"] = 500;
    marksMap["mithu"] = 100;
    marksMap["bithu"] = 0;
    display(marksMap);
    cout<<("-------------------")<<endl;

    marksMap.insert({{"baba", 10}, {"ladar", 84}});
    display(marksMap);
    
    return 0;
}