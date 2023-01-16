//POINTERS AND FUNCTIONS
#include <stdio.h>
void print(int *p)
{
    printf("p = %d",p);
    printf("\t*p = %d",*p);
}
void update(int *p)
{
    p = p+1;\
    printf("\nInside update P: %d",p);
}
int main()
{
    int value = 9;
    int *p = &value;
    print(p);
    printf("\nBefore: %d",p);
    update(p);
    printf("\nAfter: %d",p);
    return 0;
}