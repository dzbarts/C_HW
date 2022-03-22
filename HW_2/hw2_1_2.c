#include <stdio.h>

int hw2_1_2()
{
    int first;
    int amount;
    printf("Enter amount: \n");
    scanf("%d", &amount);
    printf("Enter numbers: \n");
    for (int i = 0; i < amount; ++i){
        int temp; scanf("%d", &temp);
        if (i == 0){
            first = temp;
        }
        if (temp < first) {
            first = temp;
        }
    }
    printf("Mean: %d\n", first);
    system ("pause");
    return 0;
}