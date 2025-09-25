#include<iostream>
#include<cstdlib> // If we want to use malloc, calloc etc
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    // 1 D Array {1,2,3,4,5}
    // the 'new' keyword is used to allocate memory dynamically
    int * arr = new int[n]; // This is a 1D array of size n
    cout << "Enter the " << n << " array elements:" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
    cout << "The " << n << " array elements are:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; 
    }cout << endl;
    delete [] arr; // 'delete' keyword is used to de-allocate resources 
    return 0;
}