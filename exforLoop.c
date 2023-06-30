#include <stdio.h>
#include <string.h>
void main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favourite[40], least[40];

    // initialize the favRating to 0 so any movie with any rating of
    // 1 or higher will replace it and the leastRating to 10 so any
    // movie rated 9 or lower will replace it

    favRating = 0;
    leastRating = 10;
    // Find out how many movies the user has seen and can rate
    // The loop will continue until they enter a number more than 0
    do
    {
        /* code */ printf("how many movies have you seen this year?");
        scanf("%d", &numMovies);
        // If the user enters 0 or a negative number, the program
        // will remind them to enter a positive number and prompt
        // them again
        if (numMovies < 1)
        {
            printf("no movies! how can you rate them?\n try again!\n");
        }
    } while (numMovies < 1);

    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        // Get the name of the movie and the user's rating
        /* code */ printf("\nwhat was the name of the movie?");
        printf("(1-word titles only)");

        scanf("%s", movieName);
        printf("on a scale 1-10 how would you rate!");
        scanf("%d", &rating);
        // Check whether it's their best-rated movie so far
        if (/* condition */ rating > favRating)
        {
            /* code */ strcpy(favourite, movieName);
            favRating = rating;
        }
        // Check whether it's their worst-rated movie so far
        if (rating < leastRating)
        {
            /* code */ strcpy(least, movieName);
            leastRating = rating;
        }
    }
    printf("your favourite movie was %s", favourite);
    printf("your least favourite movie was %s", least);
}