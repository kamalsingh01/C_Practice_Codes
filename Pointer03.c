//POINTER ARITHEMATIC
#include <stdio.h>

int main()
{
    int a=8;
    int b=5;
    int *p=&a;
    int *q= &b;
    printf("a = %d \t *p = %d", a,p);
    (*p)++;
    printf("\n After (*p)++\n a = %d \t *p = %d",a,p);
    p++;
    printf("\n After p++\n a = %d \t *p = %d",a,p); 
    //since p is int, one adition to p will skip 4 bytes to next(new) memory location, but no chnage in actual data present.
    p=p+2;
    printf("\n After p=p-2\n a = %d \t *p = %d",a,p);
    // p=p*2; p=p/2, p=p%2 not allowed.
    
    printf("\na = %d \t *q = %d", b,q);

    printf("\n a=%d \t b=%d",a ,b);

    printf("\n p-q: %d", p-q);
    //p+q, p*q, p/q, p5q not allowed.
    return 0;
}