#include <stdio.h>

double pyramid( int t, int h ) {
    return (double)t * (double)t * (double)h / 3;
}

int main(void) {
    for ( int i = 5; i <= 10; i++ ) {
        printf("%d: %f\n", i, pyramid(i, i+2));
    }
    return 0;
}