#include <stdio.h>

int main()
{
    FILE  *ptr;
    ptr = fopen("Shiva2.txt", "r");
    char c = fgetc(ptr); // Used to read a character from file
    printf("%C", c);
    // fputc('c', ptr);
    return 0;
}
// When file opening in write mode
// int main()
// {
//     FILE  *ptr;
//     ptr = fopen("Shiva2.txt", "w");
//     // char c = fgetc(ptr); // Used to read a character from file
//     // printf("%C", c);
//     fputc('c', ptr);
//     return 0;
// }