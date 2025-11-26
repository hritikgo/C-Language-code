#include <stdio.h>

// Function prototype (Declaration)
int sum(int, int);

// Function Definition
int sum(int x, int y)
{
    // CORRECTED: 'id' changed to 'is'
    printf("The sum is %d\n", x + y); 
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;

    int c = sum(a, b); // Function call (1 + 2)
    printf("Value returned to c: %d\n", c); // Showing the return value

    int a1 = 12;
    int b1 = 23;
    sum(a1, b1); // Function call (12 + 23), return value ignored

    int a2 = 44;
    int b2 = 55;
    sum(a2, b2); // Function call (44 + 55), return value ignored

    return 0;
}