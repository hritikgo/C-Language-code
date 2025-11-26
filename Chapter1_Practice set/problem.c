#include <stdio.h>

int main(){
    // int length = 3;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breath\n");
    scanf("%d", &breadth);
    printf("The area of this rectangular is %d", length*breadth);
    return 0;
}