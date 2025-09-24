#include<iostream>
#include<stdexcept>
using namespace std;
#define priya main
#define PI 3.14  // Macro
int priya(){
    int a = 10, b = 0;
    try{
        if(b == 0)
            throw runtime_error("Divison By Zero Error!");
        cout << "Result: " << a / b << endl;    
    }catch(const runtime_error &e){
        cout << "Caught Exception: " << e.what() << endl; 
    }
    cout << PI << endl;
    return 0;
}