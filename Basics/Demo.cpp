#include<iostream>
using namespace std;
namespace dev1{
void add(int a, int b){
    cout << a + b << endl;
}
}
namespace dev2{
void add(int a, int b){
    cout << a + b << endl;
}
}
int main(){
    // We have boolean in C++ Language by default
    bool status = true; // T = 1, F = 0 (int)
    cout << status << endl;
    cout << "JIT" << endl;
    string name;
    cout << "Enter your name:" << endl;
    getline(cin, name);
    cout << name << endl;
    dev1::add(1,2);
    dev2::add(3,4);
    return 0;
}