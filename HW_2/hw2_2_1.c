#include "stdio.h"


int hw2_2_1()
{
    int amount;
    double sum, temp;
    printf("Input amount:\n");
    scanf("%d", &amount);

    sum=0;
    for (int i = 1; i <= amount; i++){
        printf("Input number %d:\n", i);
        scanf("%d", &temp);
        sum = sum + temp;
    }
    printf("sum = %d", sum);
    return 0;
}