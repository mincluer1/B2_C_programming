#include <stdio.h>
#include <math.h>

int discriminant(int, int, int);
double quad_eq(int, int, int);

int main(void) {
    int a, b, c, d;
    double large_x;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    d = discriminant(a, b, c);
    large_x = quad_eq(a, b, d);

    if ( d == 0 ) {
        printf("重解はx = %lfです。", large_x);
    } else if ( d < 0 ) {
        printf("実数解はありません");
    } else {
        printf("2個の実数解のうち大きい方はx = %lfです。", large_x);
    }

    return 0;
}

int discriminant(int a, int b, int c ) {
    return b * b - 4 * a * c;
}

double quad_eq( int a, int b, int d) {
    double x1, x2;

    x1 = (-b + sqrt(d)) / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);

    if ( x1 >= x2 ) {
        return x1;
    }  else {
        return x2;
    }
}