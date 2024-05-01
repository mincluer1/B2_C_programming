#include <stdio.h>

int an( int n ) {
    return n * n - 3 * n + 2;
}

int main(void) {
    int total = 0;
    int m;

    scanf("%d", &m);

    for ( int i = 1; i <= m; i++ ) {
        total += an(i);
    }

    printf("%d項までの、合計は%d", m, total);

    return 0;
}