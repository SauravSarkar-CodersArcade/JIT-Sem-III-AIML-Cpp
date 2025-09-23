#include<iostream>
using namespace std;
int main() {
    int input;
    cout << "Enter a number: (1, 2 or 3):" << endl;
    cin >> input;
    try{
    if(input == 1)
        throw 1;
    else if(input == 2)
        throw 'a';
    else if(input == 3)
        throw 2.5;
    else
        cerr << "Warning : Invalid Input!" << endl;
    }
    catch (int x){
        cout << "Caught Integer: x = " << x << endl;
    }
    catch(char y){
        cout << "Caught Character: y = " << y << endl;
    }catch (double d){
        cout << "Caught Double: d = " << d << endl;
    }
    return 0;
}