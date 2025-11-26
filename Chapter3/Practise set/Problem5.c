// Write a Program to determine wheather a character entered by the user is lowercase or not.

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of the character is %d\n", ch);
    if(ch >=97 && ch<= 122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character is uppercase\n");
    }
    return 0;
}