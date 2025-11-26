#include <stdio.h>

// // Function prototype (Declaration)
// int sum(int, int);

// // Function Definition
// int sum(int x, int y)
// {
//     // CORRECTED: 'id' changed to 'is'
//     printf("The sum is %d\n", x + y); 
//     return x + y;
// }
int change (int a);

int change (int a) {
    a = 77; //Misnomer
    return 0;
}

int main()
{
    int b = 22;
    change(b); // the vlue of b remains 22
    printf("b is %d\n", b);
return 0;
}