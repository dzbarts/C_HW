#include <stdio.h>
#include <stdlib.h>

int hw2_2_9()
{
    double next, current;
    int length = 0, maxlength = 0, i = 0, maxi = 0;
    printf("Enter a sequence\n");

    while((scanf("%lf", &next)) & (next != EOF)){
        i++;
        if (i == 1){
            current = next;
            maxi = 1;
            length = 1;
            maxlength = 1;
        }
        else {
            if (current == next){
                length++;
            }
            else {
                if (length > maxlength){
                    maxlength = length;
                    maxi = i-1;
                }
                length = 1;
            }
            current = next;
        }
    }
    if (length > maxlength){
        maxlength = length;
        maxi = i;
    }
    printf("Length of the longest sequence with equal numbers = %d. \n First index = %d.", maxlength, maxi-maxlength+1);
    return 0;
}