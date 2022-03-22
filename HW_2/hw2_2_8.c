#include <stdio.h>

int hw2_2_8(){
    int counter = 0, counterofnumbers = 0, amount;
    double temp, prev;

    printf("Enter amount of digits:\n");
    scanf("%d", &amount);

    printf("Enter digit number 1:\n");
    scanf("%lf", &prev);

    for (int i = 2; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%lf", &temp);

        if (temp > prev) {
            counter++;
        }
        else{
            if (counter != 0) counterofnumbers++;
            counter = 0;
        }
        prev = temp;
    }

    printf("The strictly ascending section is equal to %d", counterofnumbers);
    return 0;
}