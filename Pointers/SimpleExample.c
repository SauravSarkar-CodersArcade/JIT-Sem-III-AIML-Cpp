#include<stdio.h>
int main(){
    int a = 10;
    printf("Address of a: %d\n", &a);
    printf("Hexa Address of a: %p\n", &a);
    printf("Base Address of a: %x\n", &a);
    // Storing the address of a into a pointer(reference)
    int * ptr = &a;
    printf("Address of a using ptr: %d\n", ptr);
    printf("Hexa Address of a using ptr: %p\n", ptr);
    printf("Base Address of ptr: %x\n", ptr);
    // Accessing the value from pointer : De-referencing
    printf("Value of a using ptr: %d\n", *ptr);
    // Double Pointer:
    int ** pp = &ptr; 
    printf("Address of pointer using & operator: %p\n", &ptr);
    printf("Address of pointer using d-ptr: %p\n", pp);
    printf("Value of a using dPtr: %d\n", **pp);
    printf("%d\n", *(&a));
    return 0;
}