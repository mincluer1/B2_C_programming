#include <stdio.h>

int powint( int x, int p ) {
    int y = 1;

    while ( p-- > 0 ) {
        y *= x;
    }

    return y;
}

int main(void) {

    for ( int i = 1; i <= 10; i++ ) {
        printf("%dの3乗は、%d\n", i, powint(i, 3));
    }

    return 0;
}