// ! Design a class hierarchy for different shapes, such as Circle, Square. Each shape should have a virtual function called calculateArea() that calculates and returns the area of the shape. Implement these classes and demonstrate their use in a program. Ensure that the calculateArea() function is appropriately overridden in each derived class.

// #include<iostream>
// using namespace std;

// class Area{
//     public:
//         virtual float calculateArea() = 0;
// };

// class Circle : public Area{
//     float radius;
//     public:
//         Circle(float a){
//             radius = a;
//         }
//         float calculateArea(){
//             return 3.14 * radius * radius;
//         }
// };

// class Square : public Area{
//     float side;
//     public:
//         Square(float a){
//             side = a;
//         }
//         float calculateArea(){
//             return side * side;
//         }
// };

// class Rectangle : public Area{
//     float length, breath;
//     public:
//         Rectangle(float l, float b){
//             length = l;
//             breath = b;
//         }
//         float calculateArea(){
//             return length * breath;
//         }
// };

// int main(){

//     Circle C(1);
//     cout<<"Area of is circle "<<C.calculateArea()<<endl;

//     Square S(4);
//     cout<<"Area of is square "<<S.calculateArea()<<endl;

//     Rectangle R(5, 4);
//     cout<<"Area of is rectangle "<<R.calculateArea()<<endl;

//     return 0;
// }

//  ------------------------------------------------

#include<iostream>
using namespace std;

class Circle{
    float radius;
    public:
        Circle(float a){
            radius = a;
        }
        virtual float calculateArea(){
            return 3.14 * radius * radius;
        }
};

class Square : public Circle{
    float side;
    public:
        Square(float a){
            side = a;
        }
        float calculateArea(){
            return side * side;
        }
};

class Rectangle : public Circle{
    float length, breath;
    public:
        Rectangle(float l, float b){
            length = l;
            breath = b;
        }
        float calculateArea(){
            return length * breath;
        }
};

int main(){

    Circle C(1);
    cout<<"Area of is circle "<<C.calculateArea()<<endl;

    Square S(4);
    cout<<"Area of is square "<<S.calculateArea()<<endl;

    Rectangle R(5, 4);
    cout<<"Area of is rectangle "<<R.calculateArea()<<endl;

    return 0;
}