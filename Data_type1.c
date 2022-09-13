/*********************************************************************
 * Data Types:
 * 
 * Primitive: int, char, float, double, void
 * Derived: Functions, Arrays, Pointers, References
 * User Defined: Class, Structure, Union, Enum, TypeDef.
 * 
 * > bool data type which represents boolean values(True,False) can also
 *   be used by using a header file “stdbool.h” must be included to use bool in C
 * 
 * added primitives: different in representaion, format specifier and 
 * memory accquisation.
 * 
 *i.e. short int(2B-%hd), Note: (short int x or signed short x or short x - all are same)
 *     unsigned short int(2B-%hu)
 *     unsigned int(4B-%u)  
 *     int(4B-%d)  //by default int is signed int,
 *     long int(4B-%ld)
 *     unsigned long int(4B-%lu)
 *     long long int(8B-%lld)
 *     unsigned long long int(8B-%llu)
 *     signed char(1B,%c)
 *     unsigned char(1B-%c)
 *     float(4B-%f)
 *     double(8B-%lf)
 *     long double(16B-%Lf)
 * 
 * signed int means left most bit is reserved for the sign, 1 is -ve
 * and 0 is positive. unsigned int can only have whole numbers.
 * >  sizeof() operator is used to check the size of a variable used with %d.
 * >   f after a decimal number to indicate that the compiler should treat it
 *     as a single precision floating point number and double serves as more 
 *     precision number.
 * 
 * > if we only use signed,unsigned, long, long long with any primitive data types, then by default
 *   'int' is considered as associated data type.
 * 
 * >IMP: Integer Divison like 9/5 gives integer output as 1( with %d), to get the decimal output,
 *   we need to use 9.0/5.0.  gives 1.80(%.2f) using correct format specifier.
 * 
 * > void cannot be used to define normal varibale. it is used to define pointer variable.
 * 
 * > By default floating constant is of double data type. By suffixing it with f or F, 
 *   it can be converted to float data type. float(1.414) will convert it to double.
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Integer value with positive data.
    int a = 9;
    // integer value with negative data.
    int b = -9;
    // U or u is Used for Unsigned int in C.
    int c = 89U;
    // L or l is used for long int in C.
    long int d = 99998L;
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n", c);
    printf("Integer value with an long int data: %ld", d);

    char ch='a';
    printf("\nValue of ch(%%c):%c",ch); //two modulus to represent %c in string literal.
    printf("\nValue of ch(%%d):%d",ch);
    ch++;  //increased value of ch, integer promotion when any arithematic operation is performed.
    printf("\nValue after incremenation:");
    printf("\nValue of ch(%%c):%c",ch);
    printf("\nValue of ch(%%d):%d",ch); 
    //changing format specifier changes the value, also called integer promotion. char variable moves to int 
    //integer promotion occurs with char and unsigned int.
    //integer promotion output depends on format specifier being used.

    float f1=10.5f;
    float f2=9.5;
    float f3=2E-4f;
    printf("\nValue: %f\t Size: %d \n",f1,sizeof(f1));
    printf("Value: %f\t Size: %d \n",f2,sizeof(f2));
    printf("Value: %f\t Size: %d \n",f3,sizeof(f3));

    double d1 = 123123123.00;
    double d2 = 12.293123;
    double d3 = 2312312312.123123;

    printf("\nValue: %lf\t Size: %d \n",d1,sizeof(d1));
    printf("Value: %lf\t Size: %d \n",d2,sizeof(d2));
    printf("Value: %lf\t Size: %d \n",d3,sizeof(d3));

    //bool variable
    bool arr[2] = { true, false };

    //integer promotion
    printf("\nInteger Promotion");
    char x = 30, y = 40, z = 10;
    char m = (x * y) / z; //arithematic operation
    //integer promotion output depends on format specifier being used.
    printf("\nWith %%d specifiier for char m: %d", m); 
    printf("\nWith %%c specifiier for char m: %c", m); 

    //interesting.
    unsigned int x1 = -1; 
    printf("\nx1: %u",x1);
    int y1 = ~0; 
    printf("\ny1: %u",y1);
    if (x == y) 
      printf("same, because both -1 and ~0 have same bit pattern."); 
    else
      printf("not same");

    printf("\n%f",9.0/5.0);  // gives 1.800000
    printf("\n%.2f",9.0/5.0); // gives 1.80

    
    return 0;
}