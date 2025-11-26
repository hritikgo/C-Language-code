#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Harry";
    char target[30];
    strcpy(target, st);
    printf("%s %s", st, target); // target now contains "Harry"
    // printf("%d", strlen(st));
    return 0;
}