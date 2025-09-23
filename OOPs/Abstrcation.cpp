#include<iostream>
using namespace std;
class AbstractEmployee {
    virtual void checkPromotion() = 0; // Pure Virtual Function
};
class Employee : AbstractEmployee{
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << ", Age: " << Age << ", Company: " << Company
        << endl;
    }
    virtual void work(){
        cout << Name << " attends meetings, sends emails, etc...!!!" << endl;
    }
    void checkPromotion(){
        if(Age > 30){
            cout << Name << " is promoted...!!!" << endl;
        }else{
            cout << Name << "! Better Luck Next Time!" << endl;
        }
    }
};
class SoftwareDeveloper : public Employee {
public:
    string FavProLanguage;
    SoftwareDeveloper(string name, int age, string company, string fPL)
    : Employee(name, age, company){
        FavProLanguage = fPL; 
    }
    void createApps(){
        cout << Name << " creates apps using: " << FavProLanguage << endl;
    }
    void work() override {
        cout << Name << " debugs apps, tests websites etc." << endl;
    }
};
class Lecturer : public Employee {
public:
    string Subject;
    Lecturer(string name, int age, string company, string sub)
    : Employee(name, age, company)
    {
        Subject = sub;
    }
    void teach(){
        cout << Name << " teaches " << Subject << endl;
    }
    void work()override {
        cout << Name << " gives presentations, seminars, etc." << endl;
    }
};
int main(){
    Employee e1("Sam", 22, "TCS");
    
    Employee e2 = Employee("Ram", 23, "Wipro"); // Parameterised Constructor
    SoftwareDeveloper s1("Ashank", 31, "Bizotic", "Python");
    s1.employeeDetails();
    s1.createApps();
    Lecturer l1("Akhilesh", 36, "JIT", "ADA");
    l1.employeeDetails();
    l1.teach();
    e1.work();
    s1.work();
    l1.work();
    e1.checkPromotion();
    e2.checkPromotion();
    s1.checkPromotion();
    l1.checkPromotion();
    return 0;
}