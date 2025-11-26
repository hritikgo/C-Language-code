#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[56] = "Ritik";
    char s2[56] = "Bhardwaj";

    char target[30];
    strcpy(target, st);
    // printf("%s %s", st, target); // target now contains "Harry"
    // printf("%d", strlen(st));
    strcat(s1, s2); // s1 now contains "HelloRitik" no space in between
    // printf("%s", s1);
    int a = strcmp("Deep", "Joke"); //  DJ Negative
    printf("%d", a);
    return 0;
}