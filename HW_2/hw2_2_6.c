#include <stdio.h>

int hw2_2_6(){

    int amount, temp, counter = 0, maxcntr = 0;

    printf("Enter amount of digits\n");
    scanf("%d", &amount);

    for (int i = 1; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%d", &temp);

        if (temp % 2 == 0) {
            counter++;
        }
        else{
            maxcntr = counter;
            counter = 0;
        }
    }
    printf("Amount of even is equal to %d", maxcntr);
}