//Write a program to calculate the sum of the natural numbers occuring in the multiplication of 8. (consider 8x1 to 8x10).
#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 0; i <=10; i++)
    {
        sum +=(8*i);
    }
    printf("The sum of the table of 8 is %d", sum);
    return 0;
}