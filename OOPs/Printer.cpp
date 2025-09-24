#include<iostream>
using namespace std;
class Printer {
private:
    string _name;
public:
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDoc(string txtDoc){
        // Print 10 characters / page
        // 40 / 10 = 4 pages
        int requiredPaper = txtDoc.length() / 10;
        if(requiredPaper > _availablePaper){
            // throw 404;
            throw "Printer is out of Paper!";
        }
        cout << "Printing....!!!" << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }

};
int main(){
    Printer myPrinter("HP-DeskJet-30ti", 10);
    try{
        myPrinter.PrintDoc("Hello, I am Kalyani. I am an SDT");
        myPrinter.PrintDoc("Hello, I am Priya. I am an SDE");
        myPrinter.PrintDoc("Hello, I am Chethan. I am an SDI");
        myPrinter.PrintDoc("Hello, I am Dheeraj. I am an Apprentice.");
        
    }catch (int errorCode){
        cout << errorCode << "! Out Of Paper." << endl;
    }catch (const char * txtException){
        cout << txtException << endl;
    }catch(...){
        cout << "Something unexpected happened.!" << endl; 
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}