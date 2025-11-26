#include <stdio.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important
int main(){
    struct employee facebook[100]; // an array of structures
    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee Ritik = {100, 71.22, "Ritik"};
    printf("%d %f %s", Ritik.code, Ritik.salary, Ritik.name);
    return 0;
}