//prototype
#include<iostream>
#include<string>
using namespace std;

class Prototype {
public:
    virtual Prototype* clone() = 0;
    virtual void print() = 0;
};

class ConcretePrototype1 : public Prototype {
public:
    Prototype* clone() override {
        return new ConcretePrototype1(*this);
    }
    void print() override {
        cout << "ConcretePrototype1\n";
    }
};

class ConcretePrototype2 : public Prototype {
public:
    Prototype* clone() override {
        return new ConcretePrototype2(*this);
    }
    void print() override {
        cout << "ConcretePrototype2\n";
    }
};

int main() {
    Prototype* prototype1 = new ConcretePrototype1();
    Prototype* prototype2 = new ConcretePrototype2();

    Prototype* cloned1 = prototype1->clone();
    Prototype* cloned2 = prototype2->clone();

    prototype1->print();
    cloned1->print();

    prototype2->print();
    cloned2->print();

    return 0;
}

//In this example, we create a Prototype class with two methods - clone() and print(). 
//We then create two concrete prototype classes (ConcretePrototype1 and ConcretePrototype2) that inherit 
//from the Prototype class and implement the clone() and print() methods. 
//The clone() method creates a new object of the same type and copies the values of the current object to it. 
//We can create new objects of the same type as the prototypes by calling the clone() method of the prototype objects. 
//Finally, we can call the print() method of the original and cloned objects to check if the cloning process worked correctly.