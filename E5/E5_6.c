#include <stdio.h>
#include <math.h>

double mysqrt(double);

int main(void) {
    double x;

    scanf("%lf", &x);

    mysqrt(x);

    // printf("\tx\tsqrt x\t\tmysqrt x\n");

    // for ( x = 1; x <= 10;  x++ ) {
    //     printf("\t%3.1f\t%12.10f\t%12.10f\n", x, sqrt(x), mysqrt(x)) ;
    // }

    // return 0;
}

double mysqrt(double x) {
    const double eps = 1.0e-10;
    double guess = 1.0;

    while(fabs(guess * guess -x) >= eps) {
        guess = (guess + x / guess) / 2.0;
        printf("%.10f \n", guess);
    }

    return guess;
}