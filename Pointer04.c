//COPYING A POINTER
#include <stdio.h>

int main()
{
    float x=9.75;
    float *p=&x;
    printf("Value of X: %f \t Address of X(p): %d \n", x,p);

    float *q = p;
    printf("Value of X: %f \t Value of X(p): %d \t Value of *q: %d", x, p, q);
    return 0;
}