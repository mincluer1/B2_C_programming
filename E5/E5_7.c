#include <stdio.h>
#include <math.h>
#include <unistd.h>

// double mysqrt(double);
double mycbrt(double);

// unsigned int sleep(unsigned int );

int main(void) {
    
    printf("x               r                r*r*r\n");
    for ( int i = 0; i <= 10; i ++ ) {
        printf("%lf\t%.10lf\t%.10lf\n", (double)i, mycbrt((double)i), (double)i);
    }

    return 0;
}

// double mysqrt(double x) {
//     const double eps = 1.0e-10;
//     double guess = 1.0;

//     while ( fabs(guess * guess - x) >= eps ) {
//         guess = ( guess + x / guess ) / 2.0;
//     }

//     return guess;
// }

double mycbrt(double x) {
    const double eps = 1.0e-10;
    double guess_calc;
    double guess = 1.0;


    while ( fabs(guess * guess * guess - x) >= eps ) {
        guess_calc = ( 2.0 * guess ) + ( x / ( guess * guess ));
        guess = guess_calc / 3.0;
    }

    return guess;
}