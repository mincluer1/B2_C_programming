#include <stdio.h>

int main(void) {
    int m, remainder;
    int total = 0;

    scanf("%d", &m);

    while (1) {
        remainder = m % 10;

        total += remainder;
        if ( m < 10 ) {
            break;
        }

        m /= 10;
    }

    printf("%d", total);

    return 0;
}