#include <stdio.h>

int hw2_2_4(){
    int counter = 0, amount;
    double temp, prev;

    printf("Enter amount of digits:\n");
    scanf("%d", &amount);

    printf("Enter digit number 1:\n");
    scanf("%lf", &prev);

    for (int i = 2; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%lf", &temp);

        if (temp < prev) {
            printf("Less then left: %d\n", i);
            counter++;
        }
    }

    printf("Amount is %d\n", counter);
    return 0;
}