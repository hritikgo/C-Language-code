#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a poitnter of i // (j is an integer pointer)
    int k = 74;
    printf("The address of i is %p\n", & i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));
    return 0;
}