#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints an element with its symbol and atomic mass when a number from 1 to 10 is entered
 * @n: number to be supplied as argument not more than 2 digit at most.
 * Return: always 0
 */

int main()
{

    int n;
    printf("Enter any number between 1-10: ");
    scanf("%2d", &n);
    char element[11][15] = {
        {"Periodic Table"},
        {"Hydrogen"},
        {"Helium"},
        {"Lithium"},
        {"Berylium"},
        {"Boron"},
        {"Carbon"},
        {"Nitrogen"},
        {"Oxygen"},
        {"Flourine"},
        {"Neon"}
        };

        char sbl[12][11] = {
        {"learn PT"},
        {"H"},
        {"He"},
        {"Li"},
        {"Be"},
        {"B"},
        {"C"},
        {"N"},
        {"O"},
        {"F"},
        {"Ne"}
        };

    int atomic_no[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

    printf("%s-Symbol-> '%s': atomic number --> %d\n\n", element[n],sbl[n],atomic_no[n]);

    return 0;
}
