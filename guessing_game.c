#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 0;
    int max = 99;
    int guess,tries = 1;
    int random_num = (rand() % (max - min + 1)) + min;

    while (tries <= 10)
    {
    printf("enter your guess: ");
    scanf("%d",&guess);

    if (guess == random_num)
    {
    printf("you've got it in %d tries",tries);
    break;
    }

    else
    {
        if (guess < random_num)
        {
            printf("your guess is low\n\n");
        }
        else
        {
            printf("your guess is high\n\n");
        }
        if (tries < 10)
        {
            printf("try again (tries left %d)\n\n", 10 - tries);
        }
        
    }

    if (tries == 10)
    {
        printf("your out of tries");
    }
        tries++;
    }
    
    
    return 0;
}
