#include <stdio.h>
#include <math.h>

double decimal(double a) {
    return log(a) - (int)log(a);
}

int main(void) {
    int b;

    scanf("%d", &b);

    for ( int i = 1; i < b; i ++ ) {
        printf("log(%d)の小数点以下の数字は、%lf\n", i, decimal((double)i));
    }

    return 0;
}