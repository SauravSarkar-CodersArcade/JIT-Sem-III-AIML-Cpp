#include<iostream>
#include<string.h>
using namespace std;
struct Employee{
    // char * name; // 8-bytes
    char  name[20]; // 20
    int age; // 4
    int empID; // 4
};
int main(){
    struct Employee e;
    // e.name = "Chethan"; // Static Allocation
    strcpy(e.name, "Chethan");
    e.age = 21;
    e.empID = 1001;
    cout << "Name: " << e.name << endl;
    cout << "Age: " << e.age << endl;
    cout << "ID: " << e.empID << endl;
    cout << "Size: " << sizeof(e) << " Bytes." << endl;
    return 0;
}