// ! student --> test
// ! student --> sports
// ! test --> result
// ! sports --> result

#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }

        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class result : public test, public sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){

    result mayur;
    mayur.set_number(22);
    mayur.set_marks(45, 85.3);
    mayur.set_score(8);
    mayur.display();

    return 0;
}