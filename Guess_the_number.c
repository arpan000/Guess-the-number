/*
               **** Number Guessing Game ****
               
    We   We will write a program that generates a random number and asks the player to guess it. If the player's guess is higher than the actual number, the program display "Lower number Please". Similarly if the users guess is too low, the program prints "Higher number please".

    When the user guess the correct number, the program display the number of guessses the player used to arive the number.
        
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() %100 +1; // Generates a random number between 1 to 100
    // printf("The number is %d\n",number);
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number betwwn 1 to 100\n");
        scanf("%d",&guess);
        if (guess > number)
        {
            printf("Lower number please!\n\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n\n");
        }
        else
        {
            printf("\t----Hurrah! You Find the Number ----\n");
            printf("\tYou gussed it in %d attempts\n",nguess);
        }
        nguess ++;
    } while (guess != number);
    
    return 0;
}