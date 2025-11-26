//What can be done using one type of loop can also be done using the other two types of loops- true or false?
//Write a program to sum first ten natural number using while loop?
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The sum of first 10 natural number is %d", sum);
    return 0;
}