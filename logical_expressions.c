#include <stdio.h>
#include <stdbool.h> // To use booleans more easily, alternative is to use macro

// Always use { } even with one line if statements, makes code easier to read
// And less messy. Especially if you're working with multiple nexted if 
// statements! { } exist for a reason

int main(void) {
    int i = 23;
    
    // Simple if statement
    if (i == 23) {
        printf("i is 23\n");
    }

    // Using logical negation
    if (!(i == 25)){
        printf("i is not 25\n");
    }

    // Using bool from stdbool.h, not including it would cause
    // program to not compile
    bool test = true;

    if (test){
        printf("Test is true\n");
    }

    // Using switch with 2 and 3 doing the same things, gotta use integers
    // Characters and probably bools too count as integers so they'd work
    // too, but why would you use a bool in a switch statement?
    int testNum = 1;

    switch(testNum){
        case 1:
            printf("You picked 1");
            break;
        case 2:
        case 3:
            printf("%d", testNum);
            break;
        default:
            printf("Invalid selection");
            break; // Not really necessary, but use for readability
    }

    printf("\n");

    // Use of goto, don't use at all in production. Produces hard to read
    // and messy code!
    int temp = 0;

    CHECK_TEMP:if(++temp != 10){
        goto CHECK_TEMP;
    }

    printf("temp is %d\n", temp);

    return 0;
}