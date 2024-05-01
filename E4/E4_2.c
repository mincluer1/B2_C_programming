#include <stdio.h>

int divisors( int a )  {
    int cnt = 0;

    for ( int i = 1; i <= a; i ++ ) {
        if ( a % i == 0 ) {
            cnt ++;
        }
    }

    return cnt;
}

int main(void) {
    int n;

    scanf("%d", &n);

    for ( int i = 1; i < n; i++ ) {
        printf("%d: \t%d\n", i, divisors(i));
    }

    return 0;
}