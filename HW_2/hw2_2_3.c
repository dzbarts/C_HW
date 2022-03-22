#include <stdio.h>

int hw2_2_3(){
    int counter = 0, amount;
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
    }
    amount--;
    if (counter == amount){
        printf("The sequence is increasing\n");
    }
    else{
        printf("The sequence is decreasing\n");
    }
    return 0;

}