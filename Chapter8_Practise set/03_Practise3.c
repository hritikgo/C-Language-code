// Write your own version of strlen function from <strings>
// int strlen(char str[])
// {
//     int i = 0 count; // <--- ERROR 1: Incorrect variable declaration
//     char c = str[i];
//     while (c != '\0')
//     {
//         c = str[i]; // <--- ERROR 2: Incorrect logic (you're checking the character *after* incrementing in the loop's body)
//         i++;
//     }
//     count = i - 1; // <--- This will be wrong due to the loop logic
//     return count;
// }

// Correct code

#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) // Changed function name to avoid conflict with standard library function
{
    // 1. Declare and initialize the counter variable
    int count = 0; 
    
    // 2. Iterate until the null terminator ('\0') is found
    // The loop checks the condition *before* accessing str[count] and 
    // increments *after* the current character has been processed.
    while (str[count] != '\0')
    {
        count++; // Increment the counter for each character found
    }
    
    // 3. 'count' now holds the total number of characters (excluding '\0')
    return count;
}

int main()
{
    char str[] = "Harry";

    // Call the corrected function and print the result
    printf("The length of the string \"%s\" is: %d\n", str, stringLength(str));
    
    return 0;
}