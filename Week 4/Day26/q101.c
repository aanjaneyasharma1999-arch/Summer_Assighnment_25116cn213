#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100:\n");

    do {
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High! Try Again: ");
        else if(guess < number)
            printf("Too Low! Try Again: ");

    } while(guess != number);

    printf("Congratulations! You guessed the correct number.");

    return 0;
}
