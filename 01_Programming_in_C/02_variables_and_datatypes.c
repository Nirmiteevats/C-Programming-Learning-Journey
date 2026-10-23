#include <stdio.h>

int main()
{
    // Variable declarations
    int age = 20;
    char grade = 'A';
    float percentage = 95.5f;
    double pi = 3.1415926535;

    // Display the values of the variables
    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);
    printf("Percentage = %.1f\n", percentage);
    printf("Pi = %.10lf\n", pi);

    return 0;
}


// format specifiers- %d, %c, %f, %lf
// difference in float and double is that float takes 4 bytes and double takes 8 bytes.
// another difference is that float has 6-7 decimal digits of precision and double has 15-16 decimal digits of precision.

/* These are format specifications used inside printf().
- %f — print six digits after the decimal point by default.
- %.1f — print one digit after the decimal point.
- %.2f — print two digits after the decimal point.
- %.10f — print ten digits after the decimal point. */

// MULTI LINE COMMENT SHORTCUT: SHIFT + ALT + A