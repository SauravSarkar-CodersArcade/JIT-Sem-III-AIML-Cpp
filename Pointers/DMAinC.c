#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // use of malloc 
    // ptr = (int*)malloc(n * sizeof(int));
    // use of calloc
    ptr = (int*)calloc(n, sizeof(int));
    printf("Enter the %d elements of the array\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d array elements are:\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * sizeof(int));
    printf("Enter the %d new elements of the array\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d new array elements are:\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}