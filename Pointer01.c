#include <stdio.h>

int main()
{
    int x=5;
    int *j;  // * denotes pointer variable, not an Dereferencing operator
    j=&x;
    int y=7;
    int* pt = &y;
    printf("pt: %d\n",pt);
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",j);
    printf("%d %d %d ", *j, *&x, &j); //8j is deferencing operator
    //&x=7;  - error
    return 0;
}