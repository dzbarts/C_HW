#include <stdio.h>

int hw2_2_7(){
    int amount, temp, counterofeven = 0, maxcntrofeven = 0,
    counterofodd = 0, maxcntrofodd = 0;

    printf("Enter amount of digits\n");
    scanf("%d", &amount);

    for (int i = 1; i <= amount; i++){
        printf("Enter digit number %d:\n", i);
        scanf("%d", &temp);

        if (temp % 2 == 0) {
            counterofeven++;
        }
        else{
            if (counterofeven != 0) maxcntrofeven = counterofeven;
            counterofeven = 0;
        }
        if (temp % 2 == 1) {
            counterofodd++;
        }
        else{
            if (counterofodd != 0) maxcntrofodd = counterofodd;
            counterofodd = 0;
        }
    }
    if (counterofeven > maxcntrofeven) maxcntrofeven = counterofeven;
    if (counterofodd > maxcntrofodd) maxcntrofodd = counterofodd;

    printf("Amount of even is equal to %d\n", maxcntrofeven);
    printf("Amount of odd is equal to %d\n", maxcntrofodd);
}