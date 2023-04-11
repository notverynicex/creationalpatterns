//Factory
#include<iostream>
using namespace std;

class Product {
public:
    virtual void print() = 0;
};

class ConcreteProductA : public Product {
public:
    void print() override {
        cout << "Concrete Product A\n";
    }
};

class ConcreteProductB : public Product {
public:
    void print() override {
        cout << "Concrete Product B\n";
    }
};

class Creator {
public:
    virtual Product* createProduct() = 0;
};

class ConcreteCreatorA : public Creator {
public:
    Product* createProduct() override {
        return new ConcreteProductA();
    }
};

class ConcreteCreatorB : public Creator {
public:
    Product* createProduct() override {
        return new ConcreteProductB();
    }
};

int main() {
    Creator* creator = new ConcreteCreatorA();
    Product* product = creator->createProduct();
    product->print();

    creator = new ConcreteCreatorB();
    product = creator->createProduct();
    product->print();

    return 0;
}

//In this example, we create an abstract Product class with a print() method. 
//We also create two concrete product classes that inherit from the Product class and override the print() method. 
//We then create an abstract Creator class with a createProduct() method that returns a Product object. 
//We also create two concrete creator classes that inherit from the Creator class and override the 
//createProduct() method to return the respective ConcreteProduct object. 
//We can create the desired product object by creating the appropriate creator object and calling the createProduct() method.
