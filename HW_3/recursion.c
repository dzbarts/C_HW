#include <stdio.h>

int factorial(int x){
    if (x <= 1) {
        printf("%d!=1\n",x);
        return 1;
    }
    int f = x * factorial(x-1);
    printf("%d!=%d\n", x, f);
    return f;
}
int recursion() {
    printf("Enter integer\n");
    int x = scanf("%d", &x);
    factorial(x);
    return 0;
}