#include "stdio.h"
#include <stdlib.h>

double to_cm(double inch)
{
    return inch*2.56;
}

double to_inch(double cm)
{
    return cm/2.56;
}

int hw1_5()
{
    double cm, inch;
    printf("Enter the number of cm: ");
    scanf("%lf", &cm);
    printf("Inch: %.3f\n", to_inch(cm));

    printf("Enter the number of inch: ");
    scanf("%lf", &inch);
    printf("Cm: %.3f\n", to_cm(inch));
    system ("pause");
    return 0;
}