#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));
    int n=0,guessed;

    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", random_number);
    do{
        printf("Guess the number\n");
        scanf("%d",&guessed);
        if (guessed>random_number)
        {
            printf("Lower number please\n");
        }
        else if(guessed<random_number){
            printf("Higher number please\n");
        }
        else{
            printf("Congrats!!");
        }
        
        n++;
    }
    while(random_number!=guessed);
    printf("You guessed the number in %d guesses",n);
    return 0;
}
