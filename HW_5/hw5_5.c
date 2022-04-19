#include <stdio.h>
#include "string.h"
#define LENGTH 256

void reverse1(char *line)
{
    int i, length = strlen(line);

    for (i = length; i >= 0; i--) putchar(line[i]);
    putchar('\n');
}


int hw5_5()
{
    char line[LENGTH];

    while (fgets(line, LENGTH, stdin)) reverse1(line);
}