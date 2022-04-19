#include <stdio.h>

int hw5_2()
{
    int symbol;

    while ((symbol = getchar()) != EOF)
    {
        if (symbol == ' ') putchar('\n');
        else putchar(symbol);
    }

    return 0;
}