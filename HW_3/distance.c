#include <stdio.h>
#include <math.h>

double for_distance(double x1, double x2, double y1, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int distance()
{
    double x1, x2, y1, y2;
    int n;

    printf("Enter coordinates of the 1st point:\n");
    n = scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of the 2nd point:\n");
    n = scanf("%lf %lf",&x2,&y2);

    printf("Distance between points (%f, %f) and (%f, %f) = %0.2f",
           x1, y1, x2, y2, for_distance(x1, x2, y1, y2));

    return 0;
}