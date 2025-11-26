// END OF FILE
// IF need read file character by character
#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("Shiva.txt", "r");
    while (1){
        ch = fgetc(ptr); // When all the content of a file has been read break
        printf("%c", ch);
        if (ch = EOF)
        {
            break;
        }
    }
    return 0;
}