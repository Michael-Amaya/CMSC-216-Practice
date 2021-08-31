#include <stdio.h>

// Function prototypes. While the variable name in the parameters is not
// Required, it is definitely good practice to leave them because it can
// provide documentation on its own
// Best documentation is the code speaking for itself. Avoid making code
// hard to read, make functions descriptive and easy to read so I don't have
// to read old outdated documentation that hasn't been updated in years
// /rant
int square(int x);

int main(void){
    printf("10 ^ 2 is %d\n", square(10));
    return 0;
}

// Function definition
int square(int x) {
    return x * x;
}