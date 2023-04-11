//singleton
#include<iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    int value;
    Singleton(int v): value(v) {}
public:
    static Singleton* getInstance(int v) {
        if (instance == nullptr) {
            instance = new Singleton(v);
        }
        return instance;
    }
    void setValue(int v) {
        value = v;
    }
    int getValue() {
        return value;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s = Singleton::getInstance(10);
    cout << "Value of Singleton object is " << s->getValue() << endl;

    s->setValue(20);
    cout << "Value of Singleton object after modification is " << s->getValue() << endl;

    return 0;
}

//In this example, we create a Singleton class with a private constructor and a static getInstance() method. 
//The getInstance() method returns the singleton object and creates it if it does not already exist. 
//We can access the singleton object by calling the getInstance() method. 
//In this example, we set and get the value of the singleton object.
