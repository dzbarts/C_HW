#include <stdio.h>

int for_gcd(int x, int y){
    int a = x;
    int b = y;
    while((a != 0)&(b != 0)){
        if (a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if (a > 0){
        return a;
    }
    else{
        return b;
    }
}

int gcd()
{
    int x, y;
    printf("Enter 2 integers:\n");
    x = scanf("%d", &x);
    y = scanf("%d", &y);

    printf("GCD(%d, %d)=%d",x, y, for_gcd(x,y));
    return 0;
}