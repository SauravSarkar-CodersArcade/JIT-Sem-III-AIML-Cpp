#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int ** arr = new int * [n]; // ** -> the full box, * -> each row
    for(int i=0; i<n; i++){
        // Initialize the size of each row
        arr[i] = new int[n]; // This is the size of each row
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }  
    } 
    cout << "The array elements:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }  cout << endl;
    } 
    delete [] arr;
    return 0;
}