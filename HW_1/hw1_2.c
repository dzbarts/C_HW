#include "stdio.h"
#include <stdlib.h>

int hw1_2()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf(number % 2 ? "Odd\n" : "Even\n");
    system ("pause");
    return 0;
}