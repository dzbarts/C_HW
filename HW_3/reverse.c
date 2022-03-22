#include <stdio.h>
#include <stdlib.h>
int for_reverse(int x){
    int a = x;
    int b = 0;
    while(a != 0){
        b = b * 10 + a % 10;
        a = a / 10;
    }
    return b;
}
int reverse() {
    int x;
    printf("Enter integer\n");
    x = scanf("%d", &x);
    printf("%d", for_reverse(x));
    return 0;
}