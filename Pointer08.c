//DOUBLE POINTER
#include <stdio.h>

int main()
{
    int i=5;
    int* p=&i;
    int** p2 = &p;
    //everything goes well
    printf("p: %d\n",p);
    printf("&p: %d\n",&p);
    printf("Sizeof(p): %d\n",sizeof p);

    printf("*p2: %d\n",*p2);   
    printf("i: %d\n",i); 
    printf("*p: %d\n",*p);
    printf("**p2: %d\n",**p2); 
    // cvalue of i: *(*(p))

    printf("&i: %d\n",&i);
    printf("p: %d\n",p);
    printf("*p2: %d\n",*p2);

    printf("&p: %d\n",&p);
    printf("p2: %d\n",p2);
    
    return 0;
}
