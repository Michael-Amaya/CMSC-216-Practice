#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // while loop that checks if i is 10 and increments after check
    int i = 0;

    while (i++ != 10) {
        printf("i: %d\n", i);
    }

    printf("\n--------------------\n\n");

    // Do loop that checks if user presses no

    bool continue_program = true;
    char response = 0;
    do {
        printf("Doing program stuff\n");
        printf("Continue (N for no)?  ");
        scanf("%c", &response);

        switch (response){
            case 'n':
            case 'N':
                continue_program = false;
                break;
        }
    } while(continue_program);

    printf("\n--------------------\n\n");

    // For loop that adds random numbers
    int sum = 0;
    for (int j = 0; j < 10; ++j){
        sum += j;
    }

    printf("Sum: %d\n", sum);

    printf("\n--------------------\n\n");

    // Exiting for loop with break where it stops at 4
    for (int j = 0; j < 10; ++j) {
        if (j == 5) {
            break;
        }

        printf("j is %d\n", j);
    }

    printf("\n--------------------\n\n");

    // Continuing loops for edge case
    for (int j = 0; j < 10; j++) {
        if (j == 0) {
            printf("Skipping 0 because division by 0 not possible\n");
            continue;
        }
        printf("100 / %d is %f\n", j, 100.0f / j);
    }
    return 0;
}