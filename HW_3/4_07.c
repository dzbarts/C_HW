#include "stdio.h"

int count_space(char *p)
{
    int res = 0;
    for (; *p!='\0'; p++)
        if (*p==' ') res++;
    return res;
}

int hw4_07()
{
    printf("%d\n", count_space("asdf asd fasdf asdfasd"));
    printf("%d\n", count_space("j kg ghjkhj ghj kg"));
    return 0;
}