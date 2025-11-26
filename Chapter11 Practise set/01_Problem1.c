// Write a program to dynamically create an arry of size 8 capable of storing 6 integers.
#include <stdio.h>

int main(){
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 45;
    printf("%d\n", ptr[0]);
    return 0;
}