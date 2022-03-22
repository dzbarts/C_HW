#include "stdio.h"

#include "stdio.h"

int hw2_2_5(){
    int amount, idx;
    double temp, min;

    printf("Enter amount of digits:\n");
    scanf("%d", &amount);

    printf("Enter digit number 1\n");
    scanf("%lf", &temp);
    min = temp;
    idx = 1;

    for (int i = 2; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%lf", &temp);

        if (temp < min) {
            min = temp;
            idx = i;
        }

    }

    printf("Amount is equal to %d", idx);
    return 0;


}