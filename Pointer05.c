//POINTERS AND ARRAYS
#include <stdio.h>

int main()
{
    int a[10] = {2,7,21,0,65};
    printf("%d\n",a); //prints address of first element of the array
    printf(" %d\n",a[0]);   //prints value of first element 
    printf("%d\n", &a);     // prints address of first element of the array
    printf("%d \n",*a);     // prints value of first element of the array

    printf("%d\n", *a+1);   //prints value at first element and adding 1 into it.
    printf("%d\n", *(a+1)); //prints value of the element at index 1
    printf("%d\n", *(a)+1);   //prints value at first element and adding 1 into it.

    //interesting
    int i=2;
    printf("%d\n", i[a] );  //prints element of array at index i
    printf("%d\n", *(a+i)); //similiar

    int *p = a;  //or int *p = &a[0];
    printf("size of A: %d \t Size of p: %d \t Size of *p:%d \t Size of &p:%d\n", sizeof a, sizeof p, sizeof *p, sizeof &p);
    printf("p=%d\t*p=%d\t&p=%d\n", p,*p,&p);
    p=p+1;
    printf("p=%d\t*p=%d\t&p=%d\n", p,*p,&p);
    int *q = &p+1;
    printf("p=%d\t*p=%d\t&p=%d\n", p,*p,q);

    //Character Arrays and pointers
    char ch[6] = "abcde";
    char *c = &ch[0]; 
    printf("&a = %d\n",a);
    printf("c = %d \n",c);
    printf("ch(%%d) = %d \n", ch);
    printf("*ch(%%d) = %d \n", *ch);
    printf("*ch(%%c) = %c \n", *ch);
    printf("ch(%%s) = %s\n",ch);

    char temp = 'z';
    char *pc = &temp;
    printf("pc(&temp) = %d\n ", pc);
    printf("pc(&temp) = %c\n ", pc);
    printf("pc(&temp) = %s\n ", pc);
    return 0;
}