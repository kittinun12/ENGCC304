#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int score;
    int guess, number;
    int low, high;

    srand(time(NULL));

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) : ");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("\nSee you again.\n");
            break;
        }

        score = 100;
        low = 1;
        high = 100;
        number = rand() % 100 + 1;

        printf("\n(Score=%d)\n", score);

        while (1) {
            printf("Guess the winning number (%d-%d) : ", low, high);
            scanf("%d", &guess);

            if (guess == number) {
                printf("That is correct!! The winning number is %d.\n", number);
                printf("\nScore this game: %d\n\n", score);
                break;
            } else {
                score -= 10;
                if (score <= 0) {
                    printf("Game over! The winning number was %d.\n", number);
                    printf("Score this game: 0\n\n");
                    break;
                }

                if (guess < number) {
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                    if (guess + 1 > low) low = guess + 1;
                } else {
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                    if (guess - 1 < high) high = guess - 1;
                }
            }
        }
    }

    return 0;
}
