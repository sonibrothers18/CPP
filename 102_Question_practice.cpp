/* #include <iostream>

class A {

public:

void display() const { std::cout << "Class A" << std::endl;

}};

class B: public A {

public:

void display() const { std::cout << "Class B" << std::endl;

}};

class C: public A {

public:
void display() const { std::cout << "Class C" << std::endl;

}};


class D: public B, public C {

public:

// Fill in the code to resolve the ambiguity
};

int main(){

// Fill in the code to resolve the ambiguity }

The class hierarchy includes four classes: A, B (derived from A), C (derived from A), and D (derived from both B and C). In the class D, there is an ambiguity issue due to the diamond problem.

Your task is to resolve the ambiguity in ciass D by implementing the necessary code. Provide any two ways to solve the ambiguity of the above code. */