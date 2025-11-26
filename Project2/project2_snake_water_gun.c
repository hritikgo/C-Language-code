// Write a program capable of playing this game with you.
// Your program should be able to print the result after you choose snake/water/gun.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("choose 0 for snake, 1 for water and 2 for Gun\n");
    scanf("%d", &player);
    printf("Computer choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
    }
    else if (player == 0 && computer == 2)
    {
    }
    else if (player == 1 && computer == 0)
    {
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
    }
    else if (player == 2 && computer == 0)
    {
    }
    else if (player == 2 && computer == 1)
    {
        
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw\n");
    }

    return 0;
}