// Use the array in problem 1 to 6 integers entered by the user.
#include <stdio.h>

int main(){
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    
    ptr[0] = 45;
    printf("%d\n", ptr[0]);
    return 0;
}