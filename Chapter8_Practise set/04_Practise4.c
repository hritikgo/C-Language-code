// Write a function slice() to slice a string. It shoud be change the original string such that it is now the sliced string. Take "m" and "n" as the start ending position for slice.

// #include <stdio.h>
// int slice(char str[], int m, int n){
//     int i=0, count;
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];

//     str = ptr1;
//     // str[n] = '\0';
//     return 0;
// }
// int main(){
//     char str[] = "Shiva Ji";
//     slice(str, 1, 5);
//     printf("%d", slice(str, 1, 5));
//     return 0;
// }

#include <stdio.h>
#include <string.h> // For the standard strlen function, although not strictly needed for the logic below

// Function to slice a string in-place from index m up to (but not including) index n
// The final string will be of length n - m
void slice(char str[], int m, int n)
{
    int i = 0; // Counter for the new string
    
    // Check for invalid bounds (optional but good practice)
    if (m < 0 || n <= m) {
        // Handle error or simply do nothing
        return;
    }

    // Loop from the starting index 'm' up to the ending index 'n'
    while (m < n && str[m] != '\0')
    {
        // 1. Copy the character from the original position 'm' to the new position 'i'
        str[i] = str[m];
        
        // 2. Move to the next characters
        i++;
        m++;
    }

    // 3. Terminate the new string at index 'i'
    str[i] = '\0';
}

int main()
{
    // The string is stored in writable memory (array declaration)
    char str[] = "Shiva Ji"; 
    
    // Output: str[] is "Shiva Ji"
    // m = 1 (start at 'h')
    // n = 5 (stop before ' ')
    // Result should be "hiva" (indices 1, 2, 3, 4)
    slice(str, 1, 5);

    // After the function, str[] in main is modified
    printf("%s", str); // Correctly prints the modified string
    
    return 0;
}