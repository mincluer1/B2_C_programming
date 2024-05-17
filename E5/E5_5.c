#include <stdio.h>

int gcd(int, int);

int main(void) {
    int s, t;
    int cnt = 0;

    scanf("%d", &s);
    scanf("%d", &t);

    for ( int i = s; i <= t; i++ ) {
        for ( int j = i+1; j <= t; j++ ) {
            if ( gcd(j, i) == 1 ) {
                printf("(%d, %d)\n", i, j);
                cnt++;
            }
        }
    }

    printf("%d組", cnt);

    return 0;
}

int gcd(int x, int y ) {
    int z;

    while ((z = x % y ) != 0) {
        x = y;
        y = z;
    }

    return y;
}