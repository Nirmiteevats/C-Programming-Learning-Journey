
#include <stdio.h>

struct Student {
    int age;
};

int main()
{
    int a = 10, b = 3;

    // 1. Arithmetic operators
    printf("=== Arithmetic Operators ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // The %% is used to print the % symbol in printf.

    // 2. Relational operators
    printf("\n=== Relational Operators ===\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b:  %d\n", a > b);
    printf("a < b:  %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // 3. Logical operators
    printf("\n=== Logical Operators ===\n");
    printf("(a > 5) && (b < 5): %d\n", //and
           (a > 5) && (b < 5));
    printf("(a < 5) || (b < 5): %d\n", //or
           (a < 5) || (b < 5));
    printf("!(a > b): %d\n", !(a > b)); //not

    // 4. Assignment operators
    printf("\n=== Assignment Operators ===\n");
    int x = 10;
    printf("Initial x = %d\n", x);

    x += 2;
    printf("x += 2: %d\n", x);

    x -= 2;
    printf("x -= 2: %d\n", x);

    x *= 3;
    printf("x *= 3: %d\n", x);

    x /= 2;
    printf("x /= 2: %d\n", x);

    x %= 4;
    printf("x %%= 4: %d\n", x);

    // bitwise compound assignment operators

    x = 6;
    x &= 3;
    printf("6 &= 3: %d\n", x);

    x = 6;
    x |= 3;
    printf("6 |= 3: %d\n", x);

    x = 6;
    x ^= 3;
    printf("6 ^= 3: %d\n", x);

    x = 8;
    x <<= 1;
    printf("8 <<= 1: %d\n", x);

    x = 8;
    x >>= 1;
    printf("8 >>= 1: %d\n", x);

    // 5. Increment and decrement
    printf("\n=== Increment/Decrement ===\n");
    int n = 5;
    printf("n = %d\n", n);
    printf("n++ = %d\n", n++);
    printf("After n++: %d\n", n);
    printf("++n = %d\n", ++n);
    printf("n-- = %d\n", n--);
    printf("After n--: %d\n", n);
    printf("--n = %d\n", --n);

    // 6. Bitwise operators
    printf("\n=== Bitwise Operators ===\n");
    int p = 6, q = 3;
    printf("p & q = %d\n", p & q);
    printf("p | q = %d\n", p | q);
    printf("p ^ q = %d\n", p ^ q);
    printf("~p = %d\n", ~p);
    printf("p << 1 = %d\n", p << 1);
    printf("p >> 1 = %d\n", p >> 1);

    // 7. Conditional (ternary) operator
    printf("\n=== Conditional Operator ===\n");
    int max = (a > b) ? a : b;
    printf("Maximum = %d\n", max);

    // 8. sizeof operator
    printf("\n=== sizeof Operator ===\n");
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));

    // 9. Comma operator
    printf("\n=== Comma Operator ===\n");
    int result = (a = 4, b = 7, a + b);
    printf("Result = %d\n", result);

    // 10. Pointer operators: & and *
    printf("\n=== Pointer Operators ===\n");
    int value = 25;
    int *ptr = &value;
    printf("Address of value = %p\n", (void *)&value);
    printf("Pointer stores address = %p\n", (void *)ptr);
    printf("Value through *ptr = %d\n", *ptr);

    // 11. Structure member operators: . and ->
    printf("\n=== Member Access Operators ===\n");
    struct Student s = {20};
    struct Student *sp = &s;

    printf("Using dot: %d\n", s.age);
    printf("Using arrow: %d\n", sp->age);

    // 12. Array subscript operator []
    printf("\n=== Array Subscript Operator ===\n");
    int arr[] = {10, 20, 30};
    printf("arr[1] = %d\n", arr[1]);

    // 13. Function call operator ()
    printf("\n=== Function Call Operator ===\n");
    printf("printf is being called using ()\n");

    // 14. Type cast operator
    printf("\n=== Type Cast Operator ===\n");
    printf("(float)5 / 2 = %.2f\n", (float)5 / 2);

    return 0;
}
