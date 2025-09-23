#include<iostream>
using namespace std;
class Parent {
public:
    virtual void show(){
        cout << "Parent Class Method!" << endl;
    }
};
class Child : public Parent {
public:
    virtual void show() override {
        cout << "Child Class Overridden Method!" << endl;
    }    
};
int main(){
    Child child; // child class object can access data from the parent class
    child.show();
    return 0;
}