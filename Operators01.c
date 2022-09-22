/************************************************************************************************************************
 * Operators: Operator works on operands(data) to produce some result.
 * 
 * CLASSIFICATION: Order defined with priority
 * 
 * 1. Unary Operator: Works on single operand.
 *         +(positive), -(negetive), ++(increment), --(decrement), sizeof(variable/constant/datatype).
 * NOTE: Post-inc/dec(++/--) has the lowest priority among all the operators, pre inc\dec being unary has top priority.
 * 
 * 2. Arithematic Operator: Binary Operator performs operation on two operands and performs arithematic tasks
 *        *(multiply), /(disivision), %(modulus), +(addition), -(substartaction)
 * NOTE: *,/,% have higher priority tah +,- and associativity goes from left to right.
 *       Modulus operator doesn't works with floating point values. % is also used for checking divisibilty.
 * 
 * 3. Bitwise Operators : Binary operators that works at a bit Level.
 *      &(bitwise AND), |(bitwise OR), ^(bitwise XOR), <<(left shift), >>(right shift), ~(bitwise NOT)[unary]
 * NOTE: in right shift or left shift, only 0's are added while shifting.
 *       While working on Bitwise operators, keep bit configuration of env in mind and use whole bit config for given operand.
 *       if MSB=0. number is +ve, or if MSB=1, number is -ve.
 *       In shift operators, negetive numbers are avoided and second operand cannot be 0.
 *       IMP: bitwise not gives complement of any number and gives the value
 *       IMP: bitwise operators works on char data type but not on floating point.
 * 
 * 4. Relational Operator : determines relation and generates a either 1 or 0.
 *        >(greater than), <(less than), >=(greater than equal to), <=(less than equal to), ==(equal to), !=(not equal to)
 *        associativity is left to right anf precedence order is same as mentioned above.
 *  NOTE: Truq is 1 and False is 0.
 *        IMP: Every Non-Zero value is TRUE and zero is false.
 * 
 * 5. Logical Operators: used to combine two or more conditions/constraints or to complement the evaluation 
 *                        of the original condition under consideration. (Operators mentioned in high to Low Priority)
 *        !(Logical NOT) - complements the output, i.e. True to false and vice-versa
 *        &&(Logical AND) - returns TRUE if both the condition under consideration results True
 *        ||(Logical OR) - returns TRUE if any one(or both) of the condition under consideration results True
 * 
 *  NOTE: Left to Right Associativity.
 *        In the case of logical AND, the second operand is not evaluated if the first operand is false. 
 *        In the case of logical OR, the second operand is not evaluated if the first operand is true.
 *
 * 6. Conditional Operator : only ternary operator mainly used under decision control.
 *                   -   expression1 ? expression2 : expression3 ;
 *                  if condition is True, expression1 will execute, if False expression2 will execute
 *  NOTE: we can performing nesting on conditional statement.
 *        we can store output of conditional Operator.
 *        IMP: to execute multiple statement seperate expressions with comma.
 *             we cannot use return statement in condition statement as expression2 or expression3.
 *        Priority higher than assignemnt but lower than all above.
 *        IMP: As the priority of assignment is lower, never include assignment operation in conditional operator without
 *             parenthesis.
 *             a>b?x=a:x=b; - wrong, '=b' won't be included in the expression.
 *             a>b?x=a;(x=b); - right, priority increased by using parenthesis.
 *        IMP: The ternary operator has return type. The return type depends on exp2, and convertibility of exp3 into exp2 
 *             as per usual\overloaded conversion rules. If they are not convertible, the compiler throws an error.
 *             if exp2 is of higher data type, the outout of exp3 is implicitly converted to that data type, but if output
 *             type of exp2 is lower, it will generate compile time error.
 *       
 *  7. Assignment Operator:  lowest priority, assigns value to address of a variable.
 *         +=, -=, *=, /=, %=, &=, |=, ^= 
 *         x+=4 <=> x=x+4  // x+=4 is less time consuming.
 * 
 * Operator Precedence and other topics are in Operatos02.c
 * 
**********************************************************************************************************************/
#include <stdio.h>

int main()
{
    //UNARY OPEARTOR
    int x=-2;  // -(negetive) unary operator
    int y;
    x++;      //post-increment operator, means x=x+1
    printf("%d\t",x);
    ++x;      //pre-increment Operator, means x=x+1
    printf("%d\n",x);
    x--;      //post-decrement operator, means x=x-1
    printf("%d\t",x);
    --x;      //pre-decrement Operator, means x=x-1
    printf("%d\n",x);
    y=x++;      //**assignemt is done first due to more priority than post inc, hence y=-2, x=-1
    printf("%d\t%d\n",x,y);
    y=++x;      //**pre inc runs before assignment due to more priority, hence x=0, y=0
    printf("%d\t%d\n",x,y);
    printf("%d\t%d\t%d\t%d\t%d\n",sizeof(x),sizeof(float),sizeof(char),sizeof 3.56, sizeof 6.78f);  //sizeof
    printf("%d\n",sizeof 'a');      //**charcter internally treated as int(ASCII value taken)

    //ARITHEMATIC OPERATOR
    x=10;
    y=7;
    printf("\nx+y= %d",x+y);  //addition   
    printf("\nx-y= %d",x-y);  //substraction
    printf("\nx*y= %d",x*y);  //mulltiplication
    printf("\nx/y= %d",x/y);  //division - division result
    printf("\nx%%y= %d",x%y); //modulus - gives reminder

    printf("\n%d\t",6/8);    // int/int = int
    printf("\n%f\t",6/8.0);  // int/float =  int(if %d) and float(if %f)
    printf("\n%f\t",6.0/8);    // float/int = int(%d) and float(%f)
    printf("\n%f\t",6.0/8.0);    // float/float = float
    //if any of the operand is real, we will get real constant output

    printf("\n2+3*5.6-4/2 = %f",(2+3*5.6-4/2)); 
    //precedence occurs but ouput will generate with largest data type priority in the expression, hence %f is used.

    // printf("\n%f",(5.0%2)); modulus doesn't work for floating point values.
    printf("\n%d",(2%5));  //we get o/p same as dividend if dividend is smaller than divisor.
    printf("\n%d",(347%10)); //we get unit digit of the number using modulus.

    //modules operator with signed values, if numerator is -ve, o/p reminder is negetive.
    printf("\n5%%2 = %d",5%2);
    printf("\n-5%%2 = %d",-5%2);
    printf("\n5%%-2 = %d",5%-2);
    printf("\n-5%%-2 = %d",-5%-2);

    //BITWISE OPERATOR
    printf("\n5&8 = %d", 5&8);    //Bitwise AND: produces 0 if any operand bit is 0.
    printf("\n5|8 = %d", 5|8);    //Bitwise OR: produces 1 if any operand bit is 1.
    printf("\n5^8 = %d", 5^8);    //Bitwise XOR: produces 1 if both bits are different, else 0.
    printf("\n5>>2 = %d", 5>>2);  //right shift: shifting 2 bits of 5 to the right side or adding two 0 on left & shift to right
    printf("\n5<<2 = %d", 5<<2);  //left shift: shifting 2 bits of 5 to the left side or adding two 0 on right & shift to left
    printf("\n~5 = %d", ~5);      //bitwise NOT(unary):
    printf("\n5&'a' = %d", 5&'a');   //bitwise operator works on charcaters too.

    //RELATIONAL OPERATOR

    x=3>4;
    printf("\n3>4 = %d", x); //x =0, as 3>4 is False
    x=4!=3;
    printf("\n3!=4 = %d", x); //x=1;
    x=5>4>3;
    printf("\n5>4>3 = %d", x);  //x=0, use Left to right Associativity.
    
    //LOGICAL OPERATOR 

    x=5;
    y=x>4;
    printf("\nx>4 = %d",y);
    y=!x>4;    // !x = 0, 
    printf("\n!x>4 = %d",y);
    y=x>4&&x<10;    
    printf("\nx>4 && x<10 = %d",y);
    y=x<4&&x<10;    
    printf("\nx<4 && x<10 = %d",y);
    y=x<4||x<10;    
    printf("\nx<4 || x<10 = %d",y);
    y = ((10 == 4) && printf("GeeksQuiz"));  // this Printf doesn't execute because first condtion itself results false,
    printf("\n(10 == 4) && printf(\"GeeksQuiz\") = %d",y);
    y = ((10 != 4) && printf("\nGeeksQuiz"));  // this Printf is also executed because frist condition results True.
    printf("\n(10 != 4) && printf(\"GeeksQuiz\") = %d",y);   //outoput is True
    printf("\n");

    //CONDITIONAL OPERATOR

    10>5?printf("yeh to latest news h"):printf("Bada dukh hua sun k");
    //selective assignment.
    x=10<5?10:5;   
    printf("\nx = %d",x);
    x=5>4?1,2,3:4,5,6;   // multiple expression seperated by comma
    printf("\nx = %d",x);

    //COMPOUND ASSIGNEMENT OPERATOR
    x=5;
    printf("\n x=x*3+4 : %d",(x=x*3+4));  //x=19, 5*3 -> 15+4, here * is considered higher priority.
    x=5;
    printf("\n x*=3+4 : %d",(x*=3+4));   //x=35, as compound assignment operator has lowest priority,+ jas higher priority
    // 3+4 -> 5*7
    return 0;
}