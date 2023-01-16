//DOUBLE POINTER AND FUNCTIONS
#include <stdio.h>
void update(int** );
int main()
{
    int i=5;
    int* p=&i;
    int** p2 = &p;
    printf("Before:\n");
    printf("i: %d\n",i);
    printf("p: %d\n",p);
    printf("p2: %d\n",p2);
    update(p2);  
    printf("After:\n");
    printf("i: %d\n",i);
    printf("p: %d\n",p);
    printf("p2: %d\n",p2);
    return 0;
}
void update(int **p) //new p2 is created while function call
{
    //p = p+1;   //p2 is executing, passed as pass by value, reflects no change

    //*p = *p+1;  
    //p is executing, adddress of p is passed which gets changed in main() too

    **p = **p+1; //i value executes, value changes and gets updated.

}