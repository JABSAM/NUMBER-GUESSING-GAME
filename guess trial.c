#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;

}


int main()
 {
    int guess;
    int secretnumber;
    int attempts = 0;
     srand(time(NULL));
secretnumber = generateRandomNumber(1, 100);



    printf("welcometo jabsam number guessing game\n");

    while (1)
    {
    printf("enter your guess number between 1 and 100\n");


    scanf("%d", &guess);
    attempts++;

    
    if (guess == secretnumber)
    {
        printf("congratulations you have guessed accurately\n");
break;
    }

    
    else if (guess > secretnumber)
    {
        printf("too high, try again\n");

    }

    else
    {
        printf("too low, try again\n");
    }
}

    printf("the number of attempts is %d", attempts);
    


return 0;

}