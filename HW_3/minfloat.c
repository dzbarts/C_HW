#include <stdio.h>

double for_minfloat(double x, double y, double z){
    int min = x;
    if ((x<=y)&(x<=z)){
        return x;
    }
    if (y<=z){
        return y;
    }
    return z;

}
int minfloat()
{
    double x, y, z;
    printf("Enter 3 floats\n");
    x = scanf("%lf", &x);
    y = scanf("%lf", &y);
    z = scanf("%lf", &z);

    printf("min(%f, %f, %f)=%f", x, y, z, for_minfloat(x,y,z));
    return 0;
}