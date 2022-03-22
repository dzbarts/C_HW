#include <stdio.h>

int hw2_1_1()
{
    int sum = 0;
    int amount;
    printf("Enter amount: \n");
    scanf("%d", &amount);
    printf("Enter numbers: \n");
    for (int i = 0; i < amount; ++i){
        int temp; scanf("%d", &temp);
        sum+=temp;
    }
    printf("Mean: %d\n", sum);
    system ("pause");
    return 0;
}