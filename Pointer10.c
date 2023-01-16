//PRACTICE QUESTIONS
#include <stdio.h>

void update18( int *p)
{
    *p = *p * 2;
}
void increament21( int **ptr)
{
    ++(**ptr);
}
int main()
{   
    printf("First: \n");
    int f= 8;
    int sec=18;
    int *ptr = &sec;
    *ptr = 9;
    printf("%d \t %d \n",f,sec);

    printf("Second\n");
    int f2 = 6;
    int *p2 = &f2;
    int *q2= p2;
    (*q2)++;
    printf("f2: %d\n",f2);

    printf("Third\n");
    int f3 = 8;
    int *p3 = &f3;
    printf("%d\t",(*p3)++);
    printf("%d\n",f3);

    printf("Fourth\n"); //interesting
    int *p4 = 0; //null pointer
    int f4 = 110;
    //*p4 = f4;   //segmentaion fault, if *p4=&f4, then o/p -> 110
    //printf("%d\n",*p4);

    printf("Fifth\n");
    int f5 = 8;
    int s5 = 11;
    int *t5 = &s5;
    f5 = *t5;
    *t5 = *t5+2;
    printf("%d \t %d\n",f5,s5);

    printf("Sixth\n");
    float f6 = 12.5;
    float p6 = 21.5;
    float *ptr6 = &f6;
    (*ptr6)++;
    *ptr6 = p6;
    printf("%f \t %f \t %f\n",*ptr6,f6,p6);

    printf("Seventh\n");
    int ar7[5];
    int *ptr7;
    printf("%d \t %d \n",sizeof ar7 , sizeof ptr7);

    printf("\neighth\n");
    int ar8[] = {11,21,13,14};
    printf("%d \t %d \n",*(ar8), *(ar8+1));

    printf("\nNinth\n");
    int ar9[6] = {11,12,31};
    printf("%d \t %d\n", ar9,&ar9);

    printf("\nTenth\n");
    int ar10[6] = {11,21,13};
    printf("%d\n",(ar10+1)); 

    printf("\neleventh\n");
    int ar11[6] = {11,21,13};
    int *p = ar11;
    printf("%d\n",p[2]);

    printf("Twelwth\n");
    int ar12[] = {11,12,13,14,15};
    printf("%d \t %d \n",*(ar12),*(ar12+3));

    printf("\nThirteenth");
    int ar13[] = {11,21,31,41};
    // int *ptr13 = ar13++; error we cannot do ar=ar+1
    //printf("%d \n",*ptr13);

    printf("\nFourteenth\n");\
    char ch14 = 'a';
    char *ptr14 = &ch14;
    ch14++;
    printf("%c \n",*ptr14);

    printf("\nFifteenth \n");
    char ch15[] = "abcde";
    char *p15 = &ch15[0];
    printf("%s \n",p15); 

    printf("\nSixteenth\n");
    char ch16[] = "abcde";
    char *p16 = &ch16[0];
    p16++;
    printf("%s \n",p16);

    printf("\nSeventeenth\n");
    char ch17[] = "babbar";
    char *p17 = ch17;
    printf("%c \t %c \n ", ch17[0], p17[0]);

    printf("\nEighteenth\n");
    int i=10;
    update18(&i);
    printf("%d \n",i);

    printf("\nNinteenth\n");
    int f19 = 110;
    int *p19 = &f19;
    int **q19 = &p19;
    int s19 = (**q19)++ + 9;
    printf("%d \t %d \n", f19, s19); 

    printf("\nTwentieth\n");
    int f20 = 100;
    int *p20 = &f20;
    int **q20 = &p20;
    int s20 = ++(**q20);
    int *r = *q20; 
    ++(*r);
    printf("%d \t %d \n ", f20, s20);

    printf("\nTwenty one\n");
    int num21 = 110;
    int *p21 = &num21;
    increament21(&p21);
    printf("%d \n ", num21);
    return 0;
}