// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab        Tax
// 2.5 - 5.0L          5%
// 5.0 - 10L           20%
// Above 10L           30%

// Now that there is no tax below 2.5L take Income amout as an input from the user.

#include <stdio.h>

int main(){
    int income;
    float tax =0;
    printf("Enter income: \n");
    scanf("%d", &income);
    if(income<=250000){
        tax = 0;
    }
    else if(income> 2500000 && income<500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income> 5000000 && income<=1000000){
        tax = 0.05 * (500000 - 250000)+ 0.2 * (income - 500000);
    }
else {
    tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
}
printf(" The total tax you need to pay is %d", tax);
    return 0;
}