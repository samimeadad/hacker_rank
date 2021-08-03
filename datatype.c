#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int secondInt = 0;
    double doubleVar = 0;
    char str[100];

    int intSum = 0;
    double doubleSum = 0;

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &secondInt);
    scanf("%lf", &doubleVar);
    getchar();
    fgets(str, sizeof(str), stdin);

    intSum = i + secondInt;
    doubleSum = d + doubleVar;
    strcat(s, str);

    // Print the sum of both integer variables on a new line.
    printf("\n");
    printf("%d", intSum);

    // Print the sum of the double variables on a new line.
    printf("\n");
    printf("%0.1lf", doubleSum);

    // Concatenate and print the String variables on a new line
    printf("\n");
    puts(s);
    // The 's' variable above should be printed first.

    return 0;
}