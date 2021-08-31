#include <stdio.h>

int main(void){
    // Printing regular ints
    int a = 12;
    int b = 13;
    int c = 14;
    printf("A is %d, B is %d, C is %d\n", a, b, c);

    // Printing floats
    float d = 1.0f;
    float f = 2.53f;
    float g = 24.53f;
    printf("D is %f, f is %f, g is %f\n", d, f, g);

    // Getting data
    int h = 0;
    float j = 0;
    printf("Enter an int: ");
    scanf("%d", &h);
    printf("Enter a float: ");
    scanf("%f", &j);

    // Printing what we got
    printf("Got %d for H, and %f for J\n", h, j);
    return 0;
}