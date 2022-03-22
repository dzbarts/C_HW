#include <stdio.h>
#include <math.h>
int for_isprime(int x){
    if (x == 1){
        return 0;
    }
    int top = ceil(sqrt(x));
    if (top == x){
        top = top - 1;
    }
    for (int i = 2; i <= top; i++){
        if (x % i == 0){
            return 0;
        }
    }
    return 1;
}
int isprime()
{
    printf("Enter integer\n");
    int x = scanf("%d", &x);

    if (for_isprime(x) == 0){
        printf("%d is not prime", x);
    }
    else{
        printf("%d is prime", x);
    }
    return 0;
}