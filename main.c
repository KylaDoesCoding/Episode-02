/*
 * =======================================================
 * KylaDoesCoding - Episode 2
 * Topic: Variables & Memory
 * =======================================================
 *
 * Instructions:
 * 1. Open this in your compiler (or paste into https://onecompiler.com/c).
 * 2. Hit RUN to see what happens!
 * 3. Try changing the values of number, pi, and letter to see how the output changes!
 *
 */

#include <stdio.h>

int main(void) {

    int number = 5;
    float pi = 3.14;
    char letter = 'A';

    printf("This is the number %d\n", number);

    // Note: %f prints 6 decimal places by default (3.140000). Use %.2f to round it to 3.14
    printf("PI equals %f\n", pi);

    printf("Only one letter for %c\n\n", letter);

    return 0;
}
