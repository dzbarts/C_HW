#include "stdio.h"

int hw2_2_2(){
    int amount;
    double k, temp;

    printf("Enter digit k:\n");
    scanf("%lf", &k);

    printf("Enter amount of digits:\n");
    scanf("%d", &amount);

    for (int i = 1; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%lf", &temp);

        if (temp > k) {
            printf("First position of number which is less than k - %d\n",i);
            return 0;
        }
    }

    printf("k - max\n");
    return 0;


}