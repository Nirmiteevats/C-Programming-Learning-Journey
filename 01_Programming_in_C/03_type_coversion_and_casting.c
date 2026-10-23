
#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    // Example 1: Integer division
    printf("Integer division: %d\n", a / b);

    // Example 2: Explicit type casting
    printf("Type casting: %.2f\n", (float)a / b);

    // Example 3: Implicit conversion
    int x = 10;
    float y = 3.5;
    float result = x + y;
    printf("Implicit conversion: %.2f\n", result);

    // Example 4: Float to integer conversion
    float value = 9.8;
    int number = (int)value;
    printf("Float to integer: %d\n", number);

    return 0;
}

/* Remember these two rules:
- Decimal floating-point constants are double by default unless suffixed.
- Adding f or F makes the constant a float.
For example:
float x = 5.5f;
double y = 5.5; */
