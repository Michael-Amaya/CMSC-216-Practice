#include <stdio.h>
#include "main.h"

int main(void) {
    printf("Running program\n");
    printf("Getting square of 5: %d\n", square(5));
    
    return 0;
}

int square(int x) {
    return x * x;
}