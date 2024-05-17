#include <stdio.h>
#include <math.h>


double powdbl(double x, int p) {
    double y = 1;

    while (p-- > 0) {
        y *= x;
    }

    return y;
}

int main(void) {
    double a;

    scanf("%lf", &a);

    for (int i = 0; i <= 10; i ++ ) {
        printf("i = %d, \tpowdbl = %lf \tpow = %lf\n", i, powdbl(a, i), pow(a, i));
    }

    return 0;
}