/**************************************************************************
 * > Keyboard is standard input device and instruction used to print something 
 *   on console screen is Output instruction.
 * > printf() is an output instruction function used to print output on console.
 * > printf() is not a keyword, but its a predefined function present in stdio.h
 * > printf() prints variable values, string literals, value of expression etc.
 * > 
 * > %n in printf() %n is a special format specifier which instead of printing something 
 *   causes printf() to load the variable pointed by the corresponding argument with a 
 *   value equal to the number of characters that have been printed by printf() before 
 *   the occurrence of %n
 * 
 * 
 * > printf(): printf function is used to print character stream of data on stdout console.
 * > sprintf(): String print function instead of printing on console store it on char buffer 
 *      which are specified in sprintf.
 * > fprintf(): fprintf is used to print the string content in file but not on stdout console.
 * 
 * >scanf() is a predefined function(not a keyword) used to take values from keyboard
 * >SYNTAX: scanf("<format_specifier>",address of variable)           // &=address of
 * 
 * 
 * > getc() - It reads a single character from a given input stream and returns the corresponding 
 *          ASCII Value on success. It returns EOF on failure.
 * > getchar() - reads one charcter from standard input(console). getchar() is equivalent to getc(stdin).
 * > getch() - it reads also a single character from keyboard.
 * > getchw() -  It reads a single character from the keyboard and displays immediately 
 *               on output screen without waiting for enter key. but getch waits while user press any key
 * 
 * > %i and %d behaves same with printf but behaves different with Scanf. 
 *   %d assume base 10 while %i auto detects the base.
 * 
 * > scanf() function is used to read formatted input from stdin. It returns the whole number of characters 
 *      written in it otherwise, returns a negative value.
 *   but fscanf()  function is used to read the formatted input from the given stream in the C language. 
 * 
*/
#include <stdio.h>

int main()
{
    int n1,n2;
    float s1;
    char ch1;
    char buffer[50];
    //printf()
    printf("Namaste to Input Output"); //printing string literal
    int x=10;
    int y=20;
    int z;
    printf("\n%d",x);   // printing  variable value with format specifier for int cuz x is integer type
    printf("\nValue of expression: %d\n",(x+10)*2);  //printing expession.
    printf("Sum of %d and %d is %d.",x,y,x+y);
    printf("\nValue of expression: %d",(1+2.0f+'a'));  // we get output as 0, because of explicit type casting to lower datatype int from float
    printf("\nValue of expression: %f",(1+2.0f+'a')); //we get desired output as 100.00000 because of explicit type casting
    //NOTE: printf()It returns total number of Characters Printed, Or negative value if an output error or an encoding error 
    printf("\t - - Number of characters: %d",printf("\nNamaste"));
    //printing % in between printf
    printf("\nKamal%%Singh");
    puts("\nKamal%singh");  //can be done easily with puts, to avoid moving cursor to next line we can use fputs().
    //%n format specifier in printf()
    printf("Kamal is a go%nod boy",&y);
    printf("\t%d",y);
    //sprintf()
    z=x+y;
    sprintf(buffer,"\nSum of %d and %d is %d",x,y,z); //output is stored in buffer but we will print it on console when we want it.
    printf("%s",buffer);


    //scanf()
    // printf("\nEnter value of x: ");
    // scanf("%d",&x);    //if data given not compatible with format specifier, generates error.
    // printf("Square of x: %d",(x*x));
    // printf("\nEnter two inputs seperated with space:");
    // scanf("%d %d",&n1,&n2); //if we want take comma seperated inputs, replace space between format specifiers with comma
    // printf("Two values: %d,%d",n1,n2);
    //NOTE: scanf(): returns total number of Inputs Scanned successfully,
    //      or EOF if input failure occurs before the first receiving argument was assigned.
    // printf("\nEnter comma seperated float and char data: ");
    // printf("Number of inputs taken: %d", scanf("%f,%c",&s1,&ch1));   

    //getchar
    // printf("\nEmter a characeter: ");
    // printf("%c",getchar()); //charcter is printed
    // //getch
    // printf("\nEmter a characeter: "); // I/P :  K, o/p : 
    // printf("%c",getch()); //program terminates as soon as any charcter is entered but charcter is there on console
    // //getche
    // printf("\nEmter a characeter: ");// I/P : k , o/p : kk
    // printf("%c",getche()); //program terminates as soon as any charcter with printing the entered charcter

    // %i vs %d
    printf("\nEnter value of a in decimal format:");
    scanf("%d", &x); // I/p:12  , O/p: 12
    printf("Enter value of b in octal format: ");
    scanf("%i", &y); // I/p:012 , O/p: 10
    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &z); // I/p:0x12 , O/p: 18
    printf("a = %i, b = %i, c = %i", x, y, z);

    return 0;
}