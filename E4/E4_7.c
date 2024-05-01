#include <stdio.h>
#include <math.h>

double func( double x ) {
    return x * x - 4 * x + 2;
}

double inverse( double y ) {
    return 2 + sqrt(y+2);
}

int main(void) {
    int n;

    scanf("%d", &n);

    for ( int i = 2; i <= n; i++ ) {
        printf("x: %d,\tf(x): %.3f, \tf^-1(f(x)): %.3f\n", i, func((double)i), inverse(func((double)i)));
    }

    return 0;
}