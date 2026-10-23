
/*
=========================================================
TOPIC: OPERATOR PRECEDENCE AND ASSOCIATIVITY IN C
=========================================================

THEORY:

1. OPERATOR PRECEDENCE
   Determines how operators are grouped in an expression.
   Example: 2 + 3 * 4 = 14
   Multiplication has higher precedence than addition.

2. PARENTHESES
   Parentheses can change the grouping of an expression.
   Example: (2 + 3) * 4 = 20

3. ASSOCIATIVITY
   Determines grouping when operators have the same
   precedence.
   Example: 10 - 5 - 2
            = (10 - 5) - 2
            = 3
   Subtraction is left-associative.

4. RIGHT ASSOCIATIVITY
   Assignment operators associate from right to left.
   Example: a = b = c = 5
            = a = (b = (c = 5))

5. IMPORTANT PRECEDENCE ORDER (HIGH TO LOW)
   a. Postfix:       () [] . -> x++ x--
   b. Unary:         ++x --x ! ~ * & sizeof
   c. Multiplicative: * / %
   d. Additive:      + -
   e. Shift:         << >>
   f. Relational:    < <= > >=
   g. Equality:      == !=
   h. Bitwise AND:   &
   i. Bitwise XOR:   ^
   j. Bitwise OR:    |
   k. Logical AND:   &&
   l. Logical OR:    ||
   m. Conditional:   ?:
   n. Assignment:    = += -= *= etc.
   o. Comma:         ,

   Operators within most of these binary groups associate
   left to right. Unary, conditional and assignment
   operators associate right to left.

6. IMPORTANT GATE NOTE
   Precedence determines grouping, not necessarily the
   order of operand evaluation.
   Avoid expressions that modify the same variable
   multiple times without proper sequencing: they may
   cause undefined behavior.

=========================================================
*/

#include <stdio.h>

int main(void)
{
    int a = 2, b = 3, c = 4;
    int x, y, z;

    // 1. Multiplication has higher precedence than addition.
    //    2 + (3 * 4) = 14
    printf("1. Multiplication before addition: %d\n",
           a + b * c);

    // 2. Parentheses change the grouping.
    //    (2 + 3) * 4 = 20
    printf("2. Parentheses: %d\n",
           (a + b) * c);

    // 3. Subtraction is left-associative.
    //    (10 - 5) - 2 = 3
    printf("3. Left associativity: %d\n",
           10 - 5 - 2);

    // 4. Multiplication and division have equal precedence.
    //    Evaluate left to right: (20 / 5) * 2 = 8
    printf("4. Division and multiplication: %d\n",
           20 / 5 * 2);

    // 5. Addition occurs before relational comparison.
    //    (2 + 3) > 4 is true; 6 > 2 is true.
    //    1 && 1 = 1
    printf("5. Relational and logical AND: %d\n",
           (a + b > 4) && (6 > 2));

    // 6. Logical AND has higher precedence than logical OR.
    //    0 || (1 && 0) = 0
    printf("6. Logical AND before OR: %d\n",
           0 || 1 && 0);

    // 7. Assignment is right-associative.
    //    x = (y = (z = 5))
    x = y = z = 5;
    printf("7. Assignment associativity: %d %d %d\n",
           x, y, z);

    // 8. Conditional operator selects one of two values.
    //    Since 5 > 3 is true, the result is 10.
    printf("8. Conditional operator: %d\n",
           5 > 3 ? 10 : 20);

    // 9. Relational operators have higher precedence than
    //    logical AND. The expression evaluates to true (1).
    printf("9. Relational before logical AND: %d\n",
           5 > 3 && 2 < 4);

    // 10. Explicit parentheses make the intended grouping clear.
    printf("10. Explicit grouping: %d\n",
           (2 + 3) * (4 - 1));

    return 0;
}

/*
EXPECTED OUTPUT:

1. Multiplication before addition: 14
2. Parentheses: 20
3. Left associativity: 3
4. Division and multiplication: 8
5. Relational and logical AND: 1
6. Logical AND before OR: 0
7. Assignment associativity: 5 5 5
8. Conditional operator: 10
9. Relational before logical AND: 1
10. Explicit grouping: 15
*/
