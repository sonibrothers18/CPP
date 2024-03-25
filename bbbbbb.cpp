/*
ofstream :- write in file
ifstream :- read the file
fstream :- read and write both in file
fstream("fileName", mode-> means stream)

write :- create new file again & again and write and delete old data of file
      :- ios::out
append :- create and write in existing file without deletion of old data of file
       :- ios::app
read :- read the data of file
     :- ios::in
*/  

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    fstream fout("bbb write.txt", ios::out);
    fout<<"Mayur Soni";
    // fout<<"Mayur"; /* over write the file */
    fout.close();

    cout<<"File created of write!"<<endl;

    return 0;
}

// ---------------------------------------------------------------------------------------------

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    fstream fout("bbb append.txt", ios::app); /*--> write data in file without deleting the old data of file*/
    fout<<"Mayur Soni"<<endl;
    // we can take input from user also using cin
    fout.close();

    cout<<"File created of append!"<<endl;

    return 0;
}

// -------------------------------------------------------------------------------------------

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    char a[100];

    fstream fin("bbb append.txt", ios::in); /* --> use to read data from file*/
    fin>>a;
    cout<<a<<endl;

    cout<<"Data readed from file append!";
    return 0;
}