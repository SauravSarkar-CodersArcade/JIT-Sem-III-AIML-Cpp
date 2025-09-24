#include<iostream>
#include<string.h>
using namespace std;
union Employee{
    // char * name; // 8-bytes
    char  name[20]; // 20
    int age; // 4
    int empID; // 4
};
int main(){
    union Employee e;
    // e.name = "Chethan"; // Static Allocation
    strcpy(e.name, "Chethan");
    cout << "Name: " << e.name << endl;
    e.age = 21;
    cout << "Age: " << e.age << endl;
    e.empID = 1001;
    cout << "ID: " << e.empID << endl;
    cout << "Size: " << sizeof(e) << " Bytes." << endl;
    return 0;
}