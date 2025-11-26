#include <stdio.h>
int sum(int*, int*);
// Sum should change the value of x
int sum(int *a, int *b)
{
    *a = 8;
   // *b = 8;
    return (*a + *b);
}
int main()
{
    int x = 1, y = 8;
    printf("The sum of 1 and 6 %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}