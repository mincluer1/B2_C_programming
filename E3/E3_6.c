#include <stdio.h>

int main(void) {
    int a, b;

    for ( int a = 0; a < 6; a++ ) {
        for ( int b = a+1; b < 7; b++ ) {
            printf("( %d, %d )\n", a, b);
        }
    }

    return 0;
}