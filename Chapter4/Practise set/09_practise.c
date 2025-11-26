// Write a program 8 using while loop.
#include <stdio.h>

int main(){
    int i =1;
    int product=1;
    int n = 5;
    while(i<=n)
    {
        product  *=i;
        i++;
    }
    printf("The factorial is %d", n product);
    return 0;
}