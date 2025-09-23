#include<iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // getters
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
};
int main(){
    Employee e1;
    Employee e2 = Employee(); // Default Constructor
    e1.setName("Sahana");
    e1.setAge(32);
    e1.setCompany("Bizotic");
    cout << e1.getName() << endl;
    cout << e1.getAge() << endl;
    cout << e1.getCompany() << endl;
    return 0;
}