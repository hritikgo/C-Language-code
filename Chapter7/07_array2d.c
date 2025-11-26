// Quick Quiz: Create a 2D array by taking input from the user. Write a display function to print the content of this 2D- array on the screen.
#include <stdio.h>

int main(){
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; i++)
        {
            scanf("%d", &arr[i][j]);
            printf("Enter the value of arr[%d][%d]\n", i, j);
        }
        
    }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; i < 2; i++)
            {
                printf("The value of arr[%d][%d] is %d\n", i,j, arr[i][j]);
                // printf("%d", arr[i][j]);
                // printf("\n"); // Using when they type arr values in row & column form.
                
                // scanf("%d", &arr[i[j]]);
            }
            
        }
        
    
    return 0;
}