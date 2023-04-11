//Abstract factory
#include<iostream>
using namespace std;

class ProductA {
public:
    virtual void print() = 0;
};

class ConcreteProductA1 : public ProductA {
public:
    void print() override {
        cout << "Concrete Product A1\n";
    }
};

class ConcreteProductA2 : public ProductA {
public:
    void print() override {
        cout << "Concrete Product A2\n";
    }
};

class ProductB {
public:
    virtual void display() = 0;
};

class ConcreteProductB1 : public ProductB {
public:
    void display() override {
        cout << "Concrete Product B1\n";
    }
};

class ConcreteProductB2 : public ProductB {
public:
    void display() override {
       cout << "Concrete Product B2\n";
}
};

class AbstractFactory {
public:
    virtual ProductA* createProductA() = 0;
        virtual ProductB* createProductB() = 0;
};

class ConcreteFactory1 : public AbstractFactory {
public:
    ProductA* createProductA() override {
        return new ConcreteProductA1();
}
    ProductB* createProductB() override {
        return new ConcreteProductB1();
}
};

class ConcreteFactory2 : public AbstractFactory {
public:
    ProductA* createProductA() override {
        return new ConcreteProductA2();
}
    ProductB* createProductB() override {
        return new ConcreteProductB2();
}
};

int main() {
    AbstractFactory* factory = new ConcreteFactory1();
    ProductA* productA = factory->createProductA();
    ProductB* productB = factory->createProductB();
    productA->print();
    productB->display();

    factory = new ConcreteFactory2();
    productA = factory->createProductA();
    productB = factory->createProductB();

    productA->print();
    productB->display();

return 0;
}

//In this example, we create two abstract product classes (ProductA and ProductB) with their respective concrete product classes 
//(ConcreteProductA1, ConcreteProductA2, ConcreteProductB1, and ConcreteProductB2). 
//We also create an abstract factory class with createProductA() and createProductB() methods that return ProductA and ProductB objects, respectively. 
//We then create two concrete factory classes (ConcreteFactory1 and ConcreteFactory2) that inherit from the 
//AbstractFactory class and override the createProductA() and createProductB() methods to return 
//the respective concrete product objects. We can create the desired product objects by creating the appropriate 
//factory object and calling the createProductA() and createProductB() methods.

