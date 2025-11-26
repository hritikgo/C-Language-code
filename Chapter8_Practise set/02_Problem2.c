// Write a program to take strings as an input from the user %c and %s confirm that the strings are equal.
#include <stdio.h>

int main(){
    char str[6];
    // scanf("%s", str);
    printf("%s", str);
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5] = '\0'; // shows null character

    printf("%s", str);
    
    return 0;
}