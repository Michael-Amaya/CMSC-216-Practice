#include <stdio.h>

// Macros go here before the program is started, macros are used
// For constants. As a preprocessor directive, the compiler replaces
// all instances of the variables in the code and puts in the value
// computed.

// These are value macros
#define PI 3.141519f
#define RECIPROCAL_OF_PI (1 / PI)

// These are function macros, can be of any type and it'd work in code
#define SQUARE(x) (x*x)

int main(void){
    int toSquareInteger = 10;
    float toSquareFloat = 3.3;

    // Using regular values defined
    printf("%f\n", PI);
    printf("%f\n", RECIPROCAL_OF_PI);

    // Demonstratong that macros doesn't care about datatype
    printf("Square of %d is %d\n", toSquareInteger, SQUARE(toSquareInteger));
    printf("Square of %f is %f\n", toSquareFloat, SQUARE(toSquareFloat));
    
    return 0;
}