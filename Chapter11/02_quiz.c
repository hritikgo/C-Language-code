#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    scanf("%f\n", &n);
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 36.888;
    ptr[1] = 61.999;
    ptr[1] = 16.555;
    ptr[1] = 62.777;
    ptr[1] = 65.444;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);

    return 0;
}