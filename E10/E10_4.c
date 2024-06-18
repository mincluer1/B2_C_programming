#include <stdio.h>

int max4(int, int, int, int);
int min4(int, int, int, int);

int main(void) {
    int a, b, c, d;
    int p, q;
    int loop_cnt = 0;

    scanf("%d %d", &p, &q);

    for ( a = p; a <= q; a++ ) {
        for ( b = p; b <= q; b++ ) {
            for ( c = p; c <= q; c++ ) {
                for ( d = p; d <= q; d++ ) {
                    if ( min4(a, b, c, d) == p && max4(a, b, c, d) == q ) {
                        loop_cnt++;
                    }
                }
            }
        }
    }

    printf("%d通り", loop_cnt);

    return 0;
}

int max2(int a, int b) {
    if ( a >= b ) {
        return a;
    } else {
        return b;
    }
}

int max4(int a, int b, int c, int d) {
    return max2( max2(a, b), max2(c, d));
}

int min2(int a, int b) {
    if ( a >= b ) {
        return b;
    } else {
        return a;
    }
}

int min4(int a, int b, int c, int d) {
    return min2( min2(a, b), min2(c, d));
}