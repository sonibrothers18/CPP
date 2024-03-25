// #include<iostream>
// using namespace std;

// class vector{
//     public:
//     int *arr;
//     int size;
//         vector(int m){
//             size = m;
//             arr = new int[size];
//         }
//         int dotProduct(vector &v){
//             int d = 0;
//             for(int i=0; i<size; i++){
//                 d += this->arr[i] * v.arr[i];
//             }
//             return d;
//         }
// };

// int main(){

//     vector v1(3);
//     v1.arr[0] = 1;
//     v1.arr[1] = 2;
//     v1.arr[2] = 3;

//     vector v2(3);
//     v2.arr[0] = 1;
//     v2.arr[1] = 2;
//     v2.arr[2] = 3;

//     int a = v1.dotProduct(v2);
//     cout<<a<<endl;
    
//     return 0;
// }

// !----------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// template <class T>      // T is used for our desire data type, Ex:- int, float, char, double, etc.
// class vector{
//     public:
//         T *arr;
//         int size;
//         vector(int m){
//             size = m;
//             arr = new T[size];
//         }
//         T dotProduct(vector &v){
//             T d = 0;
//             for(int i=0; i<size; i++){
//                 d += this->arr[i] * v.arr[i];
//             }
//             return d;
//         }
// };

// int main(){

//     vector <float> v1(3);
//     v1.arr[0] = 1.5;
//     v1.arr[1] = 2.5;
//     v1.arr[2] = 3.5;

//     vector <float> v2(3);
//     v2.arr[0] = 1.5;
//     v2.arr[1] = 2.5;
//     v2.arr[2] = 3.5;

//     float a = v1.dotProduct(v2);
//     cout<<a<<endl;
    
//     return 0;
// }

//! ----------------------------------------------------------

// #include<iostream>
// using namespace std;

// template<class T>
// class A{
//     T maths;
//     T hindi;
//     public:
//         A(T a ,T b){
//             maths = a;
//             hindi = b;
//         }

//         T sum(){
//           return  maths+hindi;
//         }
// }; 

// int main(){

//     A <float> a(40, 8);
//     cout<<a.sum();
    
//     return 0;
// }