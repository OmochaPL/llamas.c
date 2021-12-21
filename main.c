#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_start(void);

int main(void)
{
    int year_start = get_start();
// Prompt for end size
    int year_end = get_int("End size: ");
  
// Calculate number of years until we reach threshold
    int year_needed = round(((year_start + (year_start/3)) - (year_start/4)) / year_end);

// Print number of years
printf("Years: %i\n", year_needed);
}

// Prompt for start size
int get_start(void)
{
    int start;
    do 
{
    start = get_int("Start size(needs to be grater than 9): ");
}
    while (start < 9);
    return start;
}


/*
Determine how long it takes for a population to reach a particular size.

$ ./population
Start size: 100
End size: 200
Years: 9

Your program should first prompt the user for a starting population size.
If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
Your program should then prompt the user for an ending population size.
If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal 
Years: n, where n is the number of years.*/
