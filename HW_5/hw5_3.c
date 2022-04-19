#include <stdio.h>

int hw5_3()
{
    int symbol;

    while ((symbol = getchar()) != EOF)
        if (symbol == ' ')
            printf("\n");
        else
            printf("!");
}