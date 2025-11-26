#include <stdio.h>

int main(){
    char st[] = "abc"; // same as doing char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    
    return 0;
}