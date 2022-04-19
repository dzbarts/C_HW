#include <stdio.h>

int getSymbols(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == ',' ||
            *str == '.' || *str == '-' || *str == '/' ||
            *str == ';' || *str == '!' || *str == '?') count ++;

        str++;
    }

    return count;
}


int hw5_1() {

    char str[] = "Hello,\n world!";

    printf("%i", getSymbols(str));

    return 0;
}