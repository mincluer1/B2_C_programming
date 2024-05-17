#include <stdio.h>

int max4(int, int, int, int);
int min4(int, int, int, int);

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("4つの入力値の最大値は、%dです。\n", max4(a, b, c, d));
    printf("4つの入力値の最小値は、%dです。\n", min4(a, b, c, d));

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