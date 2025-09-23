#include<iostream>
using namespace std;
class Addition {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }
    static void add(int a, int b, int c){
        cout << a + b + c<< endl;
    }
    static void add(float a, float b){
        cout << "Float" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){
        cout << "Double" << endl;
        cout << a + b << endl;
    }
};
int main(){
    Addition::add(10,20);
    Addition::add(10,20,30);
    
    Addition::add(10.4545,20.4789);
    Addition::add(10.45F,20.56F);
    return 0;
}