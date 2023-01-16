//CALL BY REFERENCE USING POINTERS.
#include <stdio.h>
void swap( int* , int*);
int main()
{   
    int a ,b;
    scanf("%d %d",&a,&b);
    printf("Before Swap : a=%d b=%d\n", a,b);
    swap(&a,&b);
    printf("After swap: a=%d b=%d ",a,b);
    return 0;
}
void swap(int *p, int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
 