/*********************************************************************************************************************
 * while loop: type of iterative control instructions allows code to be executed repeatedly based on a given boolean 
 *             condition. Also called Entry Control Loop.
 * 
 * while(condition)
 * {
 *      suite;
 *      updation statement;
 * }
 * 
 * do while loop: type of iterative control instructions which runs based on condition, but first statement runs then
 * condition is verified. Also called Exit Control Loop.
 * 
 * do
 * {
 *     suite;
 *     updation statement;
 * }while(condition);       //semicolon ends the do while code.
 * 
 * for loop : works same as while loop but with different syntax, preferable and easy to read.  
 * 
 * for( initialization ; condition ; updation(flow))
 * {
 *      suite;
 * }
 * NOTE: 1. Always add value updation statement with while and do while loop. 
 *       2. Loop runs until the condition specified becomes false.
 *       3. if there is no condition in for loop, loop will run infinite timmes, but if there is 
 *       no condition in while loop, it will produce error.
 *       4. and non-zero wile condition like while(1), while(2) or while(-255), all will give infinite loop only used in
 *          client server program but while(0) deduces that loop won't run.
 *       5. to terminate while(1), we can use exit(0) in switch.
 * 
 * break : 'break' statement is used to break the flow of the program as soon as it is encountered.
 *          It is used in loop as well in switch statement.
 *          when wncountered inside a loop, directs the flow to out of the loop.
 *          break is generally used based on any condition or situation.
 *          In Simple loop, it terminates as sson as break is encountered and control comes out of the loop, 
 *          In nested loops, break stops the current(innermost) loop, and comes to sucessive loop.
 *           
 * continue : continue statement is opposite to that of break statement, instead of terminating the loop, 
 *            it forces to execute the next iteration of the loop.
 *            Skips the current iteration and skips to next iteration.
 *            Statements after the 'continue' stmt in a loop are skipped.
 *                   
 * goto : an unconditional JUMP statement used to jump from anywhere to anywhere within a function.
 *      SYNTAX: goto label;  //compiler jumps to the statement marked as label(user-defined identifier)
 * 
 *              label;
 *        cons: complex login, diffuclt program analyzation, can be avoided using break and continue.
 * 
 * 
 * 
 * 
 * 
 * Switch Case control instruction : 
 * 
 *    switch(expression)     //expression results to a constant
 *    {
 *      case constant:code; break;//code can be single or mutiple line
 *      case constant:code; break;
 *      case constant:code; break;
 *      default: code       break;
 *    }
 * NOTE: 1. constant values are unique and can only be of type integer or character but not a float.
 *       2. control is taken by every case once code of any case runs. So to avaoid that, we use 
 *          break with ever case.
 *       3. case constants can be random.(non-sequential)
 *       4. default is optional and break is not required until default is added in between.
 *       5. expressions are not allowed in place of constants, only constants are allowed.
 *      
 * 
 * 
*/
#include <stdio.h>

int main()
{
    //while loop : printing square of numbers from 1 to 10
    int i=1;
    int j,space;
    int a,b,k,num;
    int current;
    while(i<=10)            //condition checked 11 times.
    {
        printf("%d\t",i*i);
        i++;
    }
    //do while loop
    printf("\n");
    i=1;
    do 
    {
        printf("Kamal\t");
        i++;
    }while(i<=10); //condition checked 10 times.
    printf("\n");
    //for loop
    for(i=1; i<=10; i=i+1) //condition checked 11 times.
    {
        printf("*x%d\t",i);
    }
    printf("\n");
    //use of break
    for(i=1;i<=5;i++)
    {
        if(i>3)
            break;  //control out of loop
        printf("%d\t",i);
    }
    i==6?printf("Program Ended Normally"):printf("Program ended with break");
    printf("\n");
    //NESTED LOOPS: pattern-printing
    for(i=0;i<5;i++)
    {
        space=0;
        for(;space<i;space+=1)
            printf(" ");
        for(space;space<5;space+=1)
            printf("%d",i+1);
        printf("\n");
    }
    printf("\n");
    j=0;
    for(i=0;i<4;i++)
    {
        space=0;
        for(;space<4-i-1;space+=1)  //we have already initalized space, so we didn't mention.
            printf(" ");
        for(space;space<4;)
        {
            j=j+1;
            printf("%d",j);
            space+=1;             //we used updated statement here without using it inside loopdefinition.
        }
        printf("\n");
    }

    //switch case
    printf("1.Addition");
    printf("\n2.Odd-Even");
    printf("\n3.Printing N Numbers");
    printf("\nEnter your choice: ");
    scanf("%d",&j);
    switch (j)
    {
    case 1:
            printf("Enter two numbers seperated by space:");
            scanf("%d %d",&a,&b);
            printf("Sum of %d and %d is : %d",a,b,(a+b));
            break;
    case 2: 
            printf("Enter the number : ");
            scanf("%d",&a);
            if(a%2==0)
                printf("Even");
            else
                printf("Odd");
            break;
    case 3:
            printf("Enter the number:");
            scanf("%d",&a);
            for(i=1;i<=a;i++)
                printf("%d\t",i);
            break;
    default:// can use exit(0) to come out of the program.
            printf("Wrong Choice");
            break;
    }

    //goto - statement 
    printf("\nEnter the number to be checked : ");
    scanf("%d",&num);
    if(num%2==0)
        goto even;
    else
        goto odd;
    // even and odds are labels defined below
    even:
        printf("%d is even",num);
    odd:
        printf("%d is odd",num);
    printf("\n");
    // goto example 2 - avoided loop.
    num=1;
    label:
        printf("%d ",num);
        num++;
        if (num <= 10)
            goto label;
    //break - statement
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(int j=1;j<7;j++)
        {
            if(j>3)   //break applies to only the loop within which it is present.
                break;
            else
                printf("*");
        }
        printf("\n");
    }

    //continue - statement
    /*Printing 
    *
    * * 
    * * *
    * * * *
    * * * * *
    * * * * * *
    * * * * * * *
    with a single loop
    */
    printf("Enter the value of k : ");
    scanf("%d",&k);
    current=0;
    for(i=1;i<=k;)
    {
        if(current<i)
        {
            printf("* ");
            current++;
            continue;
        }
        if(current==i)
        {
            printf("\n");
            i++;
            current = 0;
        }
    }
    return 0;
}