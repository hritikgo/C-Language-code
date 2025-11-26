#include <stdio.h>

int main()
{
    FILE *ptr; // Using Pointers
    ptr = fopen("shiva2.txt", "r");
    if(ptr == NULL){
        printf("The file is does not exist sorry\n");
    }
    else{

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is &d\n", num);
    }
    fclose(ptr);
        return 0;
} 