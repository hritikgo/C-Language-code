// #include <stdio.h>

// int factorial(int);
// //Factorial(5) = 1x 2x 3x 4x 5
//     // Factorial(n) = 1x 2x 3x...x n-1 x n
//     //Factorial(n-1) = Factorial(n-1) x n
//  int factorial(int n){
//     if(n == 1 || n == 0){
//         return 1;
//     }
//     // Factorial(n) = Factorial(n-1) x n
//    return Factorial(n-1)*n;
// }


// int main(){
//     int a = 3;
//     printf("The facorial of %d is %d", a, factorial(a));
//     return 0;
// }

#include <stdio.h>

// Function prototype (Declaration)
int factorial(int);

// Function Definition
int factorial(int n) {
    // Base Case: Correctly returns 1 for n=1 or n=0
    if (n == 1 || n == 0) { // Base Condition
        return 1;
    }
    
    // Recursive Step: Factorial(n) = n * Factorial(n-1)
    // CORRECTED: 'Factorial' changed to lowercase 'factorial'
    return factorial(n-1) * n; 
}


// CORRECTED: Added parentheses '()' to main function header
int main() {
    int a = 3;
    printf("The factorial of %d is %d\n", a, factorial(a));
    // Added '\n' for clean output
    
    return 0;
}

