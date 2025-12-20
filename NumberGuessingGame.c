#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int max, min;
    printf("Enter the limits between which the random number should be. \n");
    printf("Lower Limit: ");
    scanf("%d", &min);
    printf("Upper Limit: ");
    scanf("%d", &max);
    if (max < min) return 0;
    srand(time(NULL));
    int randNum = (rand() % (max-min+1)) + min;
    int guess = 0;
    int counter = 0;
    while (guess != randNum){
        printf("Guess a Number Between %d - %d: ", min, max);
        scanf("%d", &guess);
        if (guess > randNum){ 
            printf("TOO HIGH! \n");
            max = guess;
        }
        else if(guess < randNum){
            printf("TOO LOW! \n");
            min = guess;
        }
        counter ++;
    }
    printf("Well Done!!\n");
    printf("You guessed the number in %d tries.", counter);
    return 0;
}